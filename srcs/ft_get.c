/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:35:29 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/29 22:43:00 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	get_width(t_flag *all, const char ***fmt, va_list ap)
{
	(void)ap;
	while (ft_strchr("1234567890", ***fmt) && ***fmt != '\0')
	{
		if (!(all->width))
			all->width = (***(fmt) - 48);
		else
			all->width = all->width * 10 + (***(fmt) - 48);
		(*(*(fmt)))++;
	}
}

void	get_flag(t_flag *all, const char ***fmt, va_list ap)
{
	while (ft_strchr("#0*%-+' ", ***fmt) && ***fmt != '\0')
	{
		if (*(*(*(fmt))) == '#')
			all->hash += 1;
		else if (*(*(*(fmt))) == '0')
			all->zero = 1;
		else if (*(*(*(fmt))) == '+')
			all->plus = 1;
		else if (*(*(*(fmt))) == '-')
			all->minus = 1;
		else if (*(*(*(fmt))) == ' ')
			all->space = 1;
		else if (*(*(*(fmt))) == '%')
			all->percent = 1;
		else if (*(*(*(fmt))) == '*')
			all->astrix = (int)va_arg(ap, int);
		if (all->astrix < 0)
		{
			all->astrix *= -1;
			all->minus = 1;
		}
		(*(*(fmt)))++;
	}
}

void	get_precision(t_flag *all, const char ***fmt, va_list ap)
{
	while (ft_strchr(".*", ***fmt) && ***fmt != '\0')
	{
		(*(*(fmt)))++;
		if (*(*(*(fmt))) == '*')
		{
			all->precision = (int)va_arg(ap, int);
			all->minus = all->precision < 0 ? 1 : 0;
			if (all->precision < 0)
				all->precision *= -1;
			all->dot = 1;
		}
		else if (ft_isdigit(***(fmt)) && ***fmt != '\0')
		{
			all->dot++;
			while (ft_isdigit(*(*(*(fmt)))))
			{
				if (!(all->precision))
					all->precision = (*(*(*(fmt))) - 48);
				else
					all->precision = all->precision * 10 + (*(*(*(fmt))) - 48);
				(*(*(fmt)))++;
			}
		}
		all->dott = 1;
	}
}

void	get_length(t_flag *all, const char ***fmt)
{
	while (ft_strchr("hlL", **(*(fmt))) && ***fmt != '\0')
	{
		if (*(*(*(fmt))) == 'h')
		{
			if (all->shortee)
				all->shortee = 2;
			else
				all->shortee = 1;
		}
		else if (*(*(*(fmt))) == 'l')
		{
			if (all->longee)
				all->longee = 2;
			else
				all->longee = 1;
		}
		else if (*(*(*(fmt))) == 'L')
			all->longdub = 1;
		all->length = 1;
		(*(*(fmt)))++;
	}
}

void	newin(t_flag *all)
{
	all->minus = 0;
	all->plus = 0;
	all->space = 0;
	all->zero = 0;
	all->hash = 0;
	all->click = 0;
	all->width = 0;
	all->percent = 0;
	all->precision = 0;
	all->nega = 0;
	all->length = 0;
	all->longee = 0;
	all->shortee = 0;
	all->longdub = 0;
	all->trigger = 1;
	all->astrix = 0;
	all->dot = 0;
	all->dott = 0;
	all->makegreater = 0;
	all->negam = 0;
	all->pluss = 0;
}

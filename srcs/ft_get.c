/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:35:29 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:17 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../includes/ft_printf.h"

void get_width(t_flag *all,const char ***fmt, va_list ap)
{
	(void)ap;
	while (ft_strchr("1234567890", ***fmt))
	{
		if (!(all->width))
			all->width = (***(fmt) - 48);
		else
			all->width = all->width * 10 + (***(fmt) - 48);
		(*(*(fmt)))++;
	}
}

void get_flag(t_flag *all,const char ***fmt, va_list ap)
{
	char c;
	while (ft_strchr("#0*-+' ", ***fmt))
	{
		c = ***fmt;
		if (*(*(*(fmt))) == '#')
			all->hash += 1;
		else if(*(*(*(fmt))) == '0')
			all->zero = 1;
		else if (*(*(*(fmt))) == '+')
			all->plus = 1;
		else if (*(*(*(fmt))) == '-')
			all->minus = 1;
		else if (*(*(*(fmt))) == ' ')
			all->space = 1;
		else if (*(*(*(fmt))) == '*')
			all->astrix = va_arg(ap, int);
		(*(*(fmt)))++;
	}
}

void get_precision(t_flag *all,const char ***fmt, va_list ap)
{
	while (ft_strchr(".*", ***fmt))
	{
			(*(*(fmt)))++;
			if (*(*(*(fmt))) == '*')
			{
				all->precision = va_arg(ap, int);
				all->dot = 1;
			}
			else if (ft_isdigit(***(fmt)))
			{
				all->dot++;
				while(ft_isdigit(*(*(*(fmt)))))
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

void get_length(t_flag *all,const char ***fmt)
{
	while (ft_strchr("hlL", **(*(fmt))))
	{
		if(*(*(*(fmt))) == 'h')
		{
			if (all->shortee)
				all->shortee = 2;
			else
				all->shortee = 1;
		}
		else if(*(*(*(fmt))) == 'l')
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

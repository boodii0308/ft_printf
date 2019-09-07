/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:13:34 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:16 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print(t_flag *all, va_list ap)
{
	if (all->flag == 'd' || all->flag == 'i')
		make_digit(all, ap);
	else if (all->flag == 's')
		make_string(all, ap);
	else if (all->flag == 'x' || all->flag == 'X')
		make_hex(all, ap);
	else if (all->flag == 'e' || all->flag == 'E')
		make_science(all, ap);
	else if (all->flag == 'c')
		make_char(all, ap);
	else if (all->flag == 'f')
		make_float(all, ap);
	else if (all->flag == 'o')
		make_octal(all, ap);
	else if (all->flag == 'u')
		make_unsign(all, ap);
	else if (all->flag == 'p')
		make_pointer(all, ap);
	// else
	// everything(all,ap);
}

void getflag(t_flag *all, va_list ap,const char **fmt)
{
	while (*(*(fmt)) == '%' && **fmt != '\0')
	{
		all->percent += 1;
		(*(fmt))++;
	}
	(void)ap;
	while (ft_strchr(FLAG, **fmt) && **fmt != '\0')
	{
		if(ft_strchr("#0-+*' ", **fmt))
			get_flag(all, &fmt, ap);
		if (ft_strchr("123456789", **fmt))
			get_width(all, &fmt, ap);
		if (ft_strchr("hlL", **fmt))
			get_length(all, &fmt);
		if (ft_strchr(".", **fmt))
			get_precision(all, &fmt, ap);
	}
}
void get_converse(t_flag *all, va_list ap, const char **fmt)
{
	char c;
	c = **fmt;
	(void)*all;
	(void)ap;
	if (ft_strchr(SPECIFIER, **fmt) && **fmt != '\0')
	{
			all->flag = **fmt;
			c = **fmt;
	}
	(*(fmt))++;
}
void makeit(t_flag *all, va_list ap, const char *fmt)
{
	while (*(fmt) != '\0')
	{
		if (*(fmt) == '%' && *fmt != '\0')
		{
			fmt++;
			if (!ft_strchr(" .*0123456789hLljzcspdiouxXfyb#'-+", *fmt))
				break;
			newin(all);
			if (ft_strchr(FLAG, *fmt))
				getflag(all, ap, &fmt);
			if (ft_strchr(SPECIFIER, *fmt))
				get_converse(all, ap, &fmt);
			if (all->flag)
				ft_print(all, ap);
		}
		write(1, &(*fmt), 1);
		fmt++;
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
	all->trigger = 0;
	all->astrix = 0;
	all->dot = 0;
	all->dott = 0;
	all->makegreater = 0;
	all->negam = 0;
	all->pluss = 0;
}


int ft_printf(const char *fmt, ...)
{
	t_flag *all;
	va_list ap;

	all = (t_flag*)malloc(sizeof(t_flag));
	va_start(ap, fmt);
	makeit(all, ap, fmt);
	ft_bzero(all, sizeof(all));
	va_end(ap);
	return (0);
}

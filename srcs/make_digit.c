/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:41:55 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 01:00:34 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			make_digit(t_flag *all, va_list ap)
{
	intmax_t	i;

	if (all->length == 0)
		i = (int)va_arg(ap, int);
	if (all->longee == 2)
		i = (long long int)va_arg(ap, long long int);
	else if (all->longee == 1)
		i = (long int)va_arg(ap, long int);
	else if (all->shortee == 2)
		i = (signed char)va_arg(ap, int);
	else if (all->shortee == 1)
		i = (short int)va_arg(ap, int);
	if (i < 0)
	{
		all->negam = 1;
		i = i * -1;
	}
	if (i == LLONG_MIN)
	{
		all->lol += write(1, "-9223372036854775808", 20);
		return ;
	}
	all->len = ft_signed_nbr_len(i, 10);
	int_set(all, i);
}

void			int_set(t_flag *all, intmax_t i)
{
	if (all->precision == 0 && all->dott && i == 0)
		all->len = 0;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (all->precision > all->len && all->dot)
			all->width = all->precision;
		else
			all->width = 0;
	}
	if ((all->plus || all->negam) && all->space)
		all->space--;
	if (all->negam && all->plus)
		all->plus--;
	if (all->precision > all->len && all->astrix == 0)
		all->precision -= all->len;
	else
		all->precision = 0;
	all->width -= all->space + all->plus + all->negam;
	all->width -= all->precision + all->len;
	if (all->minus)
		int_left_side(all, i);
	else
		int_right_side(all, i);
}

void			fixer_int(t_flag *all)
{
	if (all->space && !all->plus && !all->negam)
		all->lol += write(1, " ", 1);
	if (all->plus || all->negam)
		all->lol += all->plus == 1 ? write(1, "+", 1) : write(1, "-", 1);
}

void			int_right_side(t_flag *all, intmax_t i)
{
	char		*s;

	if (all->width > 0 && !all->dot && all->zero)
	{
		fixer_int(all);
		all->trigger = 0;
	}
	while (all->width > 0)
	{
		if (all->zero && !all->dot)
			all->lol += write(1, "0", 1);
		else
			all->lol += write(1, " ", 1);
		all->width--;
	}
	if (all->trigger == 1)
		fixer_int(all);
	while (all->precision > 0)
	{
		all->lol += write(1, "0", 1);
		all->precision--;
	}
	s = ft_itoa_signed_base(i, 10);
	all->lol += write(1, s, all->len);
	free(s);
}

void			int_left_side(t_flag *all, intmax_t i)
{
	char *s;

	if (all->space && !all->plus && !all->negam)
		all->lol += write(1, " ", 1);
	if (all->plus || all->negam)
		all->lol += all->plus == 1 ? write(1, "+", 1) : write(1, "-", 1);
	while (all->precision > 0)
	{
		all->lol += write(1, "0", 1);
		all->precision--;
	}
	s = ft_itoa_signed_base(i, 10);
	all->lol += write(1, s, all->len);
	free(s);
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
}

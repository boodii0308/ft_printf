/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:41:55 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:23 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

void make_digit(t_flag *all, va_list ap)
{
	intmax_t i;
	int len;

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
	else if (i < 0)
	{
		i = i * -1;
	}
	if (i == LLONG_MIN)
	{
	write(1, "-9223372036854775808", 21);
	return ;
	}
	len = ft_nbrlen(i, 10);
	int_set(all, i, len);
}

void int_set(t_flag *all, intmax_t i, int len)
{
	if (!all->width)
	{
	if (all->astrix)
		all->width = all->astrix;
	else if (SIGN(all->precision) * all->precision > len)
		all->width = SIGN(all->precision) * all->precision;
	else
		all->width = len;
	}
	if (all->minus)
		int_left_side(all, i, len);
	else
		int_right_side(all, i, len);
}

void int_right_side(t_flag *all, intmax_t i, int len)
{
	if (all->space)
		write(1, " ", 1);
	while (all->width > len && all->width > (SIGN(all->precision) * all->precision))
	{
		if (all->zero)
		write (1, "0", 1);
		else
		write (1, " ", 1);
		all->width--;
	}
	while (SIGN(all->precision) * all->precision > 0 && all->dot && all->width > len)
	{
		if (all->zero)
		write (1, "0", 1);
		else
		write (1, "0", 1);
		all->precision--;
		all->width--;
	}
	if (all->plus)
		write(1, "+", 1);
	ft_putnbr(i);
	while (all->width < 0 && (SIGN(all->width) * all->width) > len)
	{
	write(1, " ", 1);
	all->width++;
	}

}

void int_left_side(t_flag *all, intmax_t i, int len)
{
	if (all->space)
	write(1, " ", 1);
	if(all->plus)
	write (1, "+", 1);
	while (SIGN(all->precision) * all->precision > 0 && all->dot && all->width > len)
	{
		if (all->zero)
		write (1, "0", 1);
		else
		write (1, "0", 1);
		all->precision--;
		all->width--;
	}
	ft_putnbr(i);
	while (all->width > len && all->width > (SIGN(all->precision) * all->precision))
	{
		if (all->zero)
			write (1, "0", 1);
		else
			write (1, " ", 1);
		all->width--;
	}
}

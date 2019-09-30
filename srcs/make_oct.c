/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_oct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:22:41 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 01:00:35 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			make_octal(t_flag *all, va_list ap)
{
	uintmax_t	i;
	char		*s;

	if (all->longee == 2)
		i = (unsigned long long)va_arg(ap, unsigned long long);
	else if (all->longee == 1)
		i = (unsigned long)va_arg(ap, unsigned long);
	else if (all->shortee == 2)
		i = (unsigned char)va_arg(ap, unsigned);
	else if (all->shortee == 1)
		i = (unsigned short)va_arg(ap, unsigned);
	else
		i = (unsigned int)va_arg(ap, unsigned);
	all->len = ft_unsigned_nbr_len(i, 8);
	set_octal(all, i);
	s = ft_itoa_unsigned_base(i, 8);
	if (all->minus)
		octal_left_side(all, s);
	else
		octal_right_side(all, s);
	free(s);
}

void			set_octal(t_flag *all, uintmax_t i)
{
	if ((i == 0 && all->hash) || (all->precision == 0 && all->dott && i == 0))
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
	if (all->negam && all->plus)
		all->plus--;
	if (all->precision > all->len)
		all->precision -= all->len + all->hash;
	else
		all->precision = 0;
	all->width -= all->space + all->plus + all->negam + all->hash;
	all->width -= all->precision + all->len;
}

void			octal_right_side(t_flag *all, char *s)
{
	if (all->space)
		all->lol += write(1, " ", 1);
	while (all->width > 0)
	{
		if (all->zero && all->dott == 0)
			all->lol += write(1, "0", 1);
		else
			all->lol += write(1, " ", 1);
		all->width--;
	}
	while (all->precision > 0)
	{
		if (all->zero || (all->precision && all->dot))
			all->lol += write(1, "0", 1);
		all->precision--;
	}
	if (all->plus)
		all->lol += write(1, "+", 1);
	if (all->hash)
		all->lol += write(1, "0", 1);
	else if (all->nega)
		all->lol += all->lol += write(1, "-", 1);
	all->lol += write(1, &(*s), all->len);
}

void			octal_left_side(t_flag *all, char *s)
{
	if (all->plus)
		all->lol += write(1, "+", 1);
	else if (all->nega)
		all->lol += write(1, "-", 1);
	while (all->precision > 0)
	{
		all->lol += write(1, "0", 1);
		all->precision--;
	}
	if (all->hash)
		all->lol += write(1, "0", 1);
	all->lol += write(1, &(*s), all->len);
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
}

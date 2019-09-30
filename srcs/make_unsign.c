/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_unsign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:49:06 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/29 23:49:58 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			make_unsign(t_flag *all, va_list ap)
{
	uintmax_t	i;
	char		*s;

	if (all->longee == 2)
		i = (unsigned long long)va_arg(ap, unsigned long long);
	else if (all->longee == 1)
		i = (unsigned long)va_arg(ap, unsigned long);
	else if (all->shortee == 2)
		i = (unsigned char)va_arg(ap, unsigned int);
	else if (all->shortee == 1)
		i = (unsigned short)va_arg(ap, unsigned int);
	else
		i = (unsigned int)va_arg(ap, unsigned int);
	all->len = ft_unsigned_nbr_len(i, 10);
	s = ft_itoa_unsigned_base(i, 10);
	set_unsign(all, i);
	if (all->minus)
		unsign_left_side(all, s);
	else
		unsign_right_side(all, s);
	free(s);
}

void			set_unsign(t_flag *all, uintmax_t i)
{
	if (all->precision == 0 && all->dott && i == 0)
		all->len = 0;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (all->precision && all->dot)
			all->width = all->precision;
		else
			all->width = all->len;
	}
	if (all->precision > all->len)
		all->precision -= all->len;
	else
		all->precision = 0;
	all->width -= all->space + all->precision + all->len;
}

void			unsign_left_side(t_flag *all, char *s)
{
	while (all->precision > 0)
	{
		all->lol += write(1, "0", 1);
		all->precision--;
	}
	all->lol += write(1, s, all->len);
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
}

void			unsign_right_side(t_flag *all, char *s)
{
	while (all->width > 0)
	{
		if (all->zero)
		{
			if (all->zero && all->dott == 0)
				all->lol += write(1, "0", 1);
			else
				all->lol += write(1, " ", 1);
		}
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
	all->lol += write(1, s, all->len);
}

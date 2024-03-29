/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:34:29 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:17:20 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			make_hex(t_flag *all, va_list ap)
{
	uintmax_t	i;

	if (all->longee == 2)
		i = (unsigned long long)va_arg(ap, unsigned long long);
	else if (all->longee == 1)
		i = (unsigned long)va_arg(ap, unsigned long);
	else if (all->shortee == 2)
		i = (unsigned char)va_arg(ap, unsigned);
	else if (all->shortee == 1)
		i = (unsigned short)va_arg(ap, unsigned);
	else
		i = (unsigned int)va_arg(ap, unsigned int);
	all->len = ft_unsigned_nbr_len(i, 16);
	set_hex(all, i);
	if (all->minus)
		hex_left_side(all, i);
	else
		hex_right_side(all, i);
}

void			set_hex(t_flag *all, uintmax_t i)
{
	if (all->hash)
		all->hash = (i == 0) ? 1 : 2;
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
		all->precision -= all->len;
	else
		all->precision = 0;
	all->width -= all->space + all->plus + all->negam + all->hash;
	all->width -= all->precision + all->len;
}

void			last_hex(t_flag *all, uintmax_t i)
{
	char		*s;
	char		*c;

	s = ft_itoa_unsigned_base(i, 16);
	c = ft_strtolower(s);
	if (all->hash == 2 && all->flag == 'x')
		all->lol += write(1, "0x", 2);
	else if (all->hash == 2 && all->flag == 'X')
		all->lol += write(1, "0X", 2);
	while (all->width-- > 0)
		all->lol += write(1, "0", 1);
	while (all->precision-- > 0)
		all->lol += write(1, "0", 1);
	if (all->flag == 'X')
		all->lol += write(1, s, all->len);
	else
		all->lol += write(1, c, all->len);
	free(s);
	free(c);
}

void			hex_right_side(t_flag *all, uintmax_t i)
{
	if (all->hash == 2 && (all->zero || (all->precision && all->dot)))
	{
		last_hex(all, i);
		return ;
	}
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
	else if (all->nega)
		all->lol += all->lol += write(1, "-", 1);
	put_hex_flag(all, i);
}

void			hex_left_side(t_flag *all, uintmax_t i)
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
	put_hex_flag(all, i);
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
}

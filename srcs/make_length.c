/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:49:23 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:58:59 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_printf2(t_flag *all)
{
	if (all->percent)
		all->len += (all->percent + 1) / 2;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (SIGN(all->precision) * all->precision > all->len)
			all->width = SIGN(all->precision) * all->precision;
		else
			all->width = all->len;
	}
	all->width -= all->len;
	if (all->minus)
		make_left_printf(all);
	else
		make_right_printf(all);
}

void		make_left_printf(t_flag *all)
{
	while (all->len > 0)
	{
		all->lol += write(1, "%%", 1);
		all->len--;
	}
	while (all->width > 0)
	{
		if (all->zero)
			all->lol += write(1, "0", 1);
		else
			all->lol += write(1, " ", 1);
		all->width--;
	}
	while (all->precision > all->len && all->dot)
	{
		all->lol += write(1, "0", 1);
		all->precision--;
	}
}

void		make_right_printf(t_flag *all)
{
	while (all->width > 0)
	{
		if (all->zero)
			all->lol += write(1, "0", 1);
		else
			all->lol += write(1, " ", 1);
		all->width--;
	}
	while (all->precision > all->len && all->dot)
	{
		all->lol += write(1, "0", 1);
		all->precision--;
	}
	while (all->len > 0)
	{
		all->lol += write(1, "%%", 1);
		all->len--;
	}
}

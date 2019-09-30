/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 21:08:20 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 01:12:24 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		make_string(t_flag *all, va_list ap)
{
	char *str;

	str = (char *)va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	all->len = ft_strlen(str);
	string_set(all);
	if (all->minus)
		string_left_side(all, str);
	else
		string_right_side(all, str);
}

void		string_set(t_flag *all)
{
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (all->precision < all->len && all->dott)
			all->width = all->precision;
		else
			all->width = all->len;
	}
	if (all->precision < all->len && all->dot)
		all->len = all->precision;
	if (all->precision == 0 && all->dott)
		all->len = 0;
	all->width -= all->len;
}

void		string_right_side(t_flag *all, char *s)
{
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
	all->lol += write(1, s, all->len);
}

void		string_left_side(t_flag *all, char *s)
{
	if (all->space)
		all->lol += write(1, " ", 1);
	all->lol += write(1, s, all->len);
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:42:27 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:12:39 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			make_pointer(t_flag *all, va_list ap)
{
	unsigned long long	lol;
	char				*s;
	char				*c;
	int					len;
	int					size;

	lol = (unsigned long long)va_arg(ap, void *);
	s = ft_itoa_unsigned_base(lol, 16);
	c = ft_strtolower(s);
	len = ft_unsigned_nbr_len(lol, 16);
	size = all->precision - len;
	all->width -= len + 2;
	if (all->precision == 0 && all->dott && lol == 0)
		len = 0;
	if (all->minus)
		make_left_pointer(all, c, len, size);
	else
		make_right_pointer(all, c, len, size);
	free(s);
}

void			make_left_pointer(t_flag *all, char *c, int len, int size)
{
	all->lol += write(1, "0x", 2);
	while (size > 0)
	{
		all->lol += write(1, "0", 1);
		size--;
	}
	all->lol += write(1, c, len);
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
	free(c);
}

void			make_right_pointer(t_flag *all, char *c, int len, int size)
{
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
	all->lol += write(1, "0x", 2);
	while (size > 0)
	{
		all->lol += write(1, "0", 1);
		size--;
	}
	all->lol += write(1, c, len);
	free(c);
}

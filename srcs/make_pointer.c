/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:42:27 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:20 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void make_pointer(t_flag *all, va_list ap)
{
	unsigned long long lol;
	char		*point;
	int			len;
	int			size;

	lol = (unsigned long long)va_arg(ap, void *);
	point = ft_itoa_base(lol, 16);
	len = ft_strlen(point);
	size = all->precision - len;
	all->width -= len + 2;

	if (all->minus)
		make_left_pointer(all, point, len, size);
	else
		make_right_pointer(all, point, len, size);
}

void make_left_pointer(t_flag *all, char *s, int len, int size)
{
	write (1, "0x", 2);
	while (size > 0)
	{
		write(1, "0" , 1);
		size--;
	}
	write(1, &s, len);
	while (all->width >0)
	{
		write (1, " ", 0);
		all->width--;
	}
}

void make_right_pointer(t_flag *all, char *s, int len, int size)
{
	while (all->width >0)
	{
		write (1, " ", 0);
		all->width--;
	}
	write (1, "0x", 2);
	while (size > 0)
	{
		write(1, "0" , 1);
		size--;
	}
	write(1, &s, len);

}

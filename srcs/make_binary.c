/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_binary.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 23:46:10 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 01:12:21 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			put_hex_flag(t_flag *all, uintmax_t i)
{
	char		*s;
	char		*c;

	s = ft_itoa_unsigned_base(i, 16);
	c = ft_strtolower(s);
	if (all->flag == 'X')
	{
		if (all->space)
			all->lol += write(1, " ", 1);
		if (all->hash && i != 0)
			all->lol += write(1, "0X", 2);
		else if (all->hash && !all->dott && all->len == 0)
			all->lol += write(1, "0", 1);
		all->lol += write(1, s, all->len);
	}
	else
	{
		if (all->hash && i != 0)
			all->lol += write(1, "0x", 2);
		else if (all->hash && !all->dott && all->len == 0)
			all->lol += write(1, "0", 1);
		all->lol += write(1, c, all->len);
	}
	free(c);
	free(s);
}

void			ft_print(t_flag *all, va_list ap)
{
	if (all->flag == 'd' || all->flag == 'i' || all->flag == 'D')
		make_digit(all, ap);
	else if (all->flag == 's' || all->flag == 'S')
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
}

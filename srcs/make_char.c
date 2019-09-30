/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:28:37 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/29 23:12:40 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		make_char(t_flag *all, va_list ap)
{
	int		c;

	if (all->length == 0)
		c = (int)va_arg(ap, int);
	else if (all->longee == 1)
		c = (unsigned short int)va_arg(ap, unsigned int);
	all->len = 1;
	if (!all->width)
		all->width = all->astrix;
	if (all->minus && all->width)
	{
		all->lol += write(1, &c, 1);
		while (--all->width > 0)
			all->lol += write(1, " ", 1);
	}
	else if (!all->minus && all->width)
	{
		while (--all->width > 0)
			all->lol += write(1, " ", 1);
		all->lol += write(1, &c, 1);
	}
	else
		all->lol += write(1, &c, 1);
}

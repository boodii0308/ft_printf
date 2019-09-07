/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:28:37 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/02 23:45:51 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void make_char(t_flag *all, va_list ap)
{
	int c;
	int len;

	if (all->length == 0)
		c = (int)va_arg(ap, int);
	else if (all->longee == 1)
		c = (unsigned short int)va_arg(ap, unsigned int);
	len = 1;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (SIGN(all->precision) * all->precision > len)
			all->width = SIGN(all->precision) * all->precision;
		else
			all->width = len;
	}

	if(all->minus)
	{
		write (1, &c, 1);
		all->width--;
		while (all->width > 0)
		{
			ft_putchar(' ');
			all->width--;
		}
	}
	else
	{
		all->width--;
		while (all->width > 0)
		{
		ft_putchar(' ');
		all->width--;
		}
		write (1, &c, 1);
	}
}

// void everything(t_flag *all, va_list ap)
// {

// }

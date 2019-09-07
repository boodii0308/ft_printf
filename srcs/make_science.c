/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_science.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:35:00 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:24 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void make_science(t_flag *all, va_list ap)
{
	long double f;
	int len;
	char *s;

	if (all->longdub)
		f = (long double)va_arg(ap, long double);
	else
		f = (long double)va_arg(ap, double);
	all->negam = (f < 0) ? 1 : 0;
	if (!all->precision)
	{
		if (all->dott)
			all->precision = 0;
		else
			all->precision = 6;
	}
	len = ft_nbrlen(f, 10);
	s = ft_itoa_science(all, f, len);
	make_set_science(all, f, len);
	if (all->minus)
		make_left_science(all, s);
	else
		make_right_science(all, s);
}


void make_set_science(t_flag *all, intmax_t f, int len)
{
	(void)f;
	if (all->makegreater)
		len++;
	if (all->plus)
		len++;
	if (all->space)
		len++;
	if (all->nega)
		len++;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (all->precision && all->dot )
			all->width = all->precision + len +1;
		else
			all->width = len;
	}
	all->width -= all->precision + len + 1;

}
void make_left_science(t_flag *all, char *s)
{
	if (all->space)
		write(1, " ", 1);
	if (all->plus)
		write(1, "+", 1);
	else if (all->nega || all->negam)
		write(1, "-", 1);
	write(1, s, ft_strlen(s));
	while (all->width > 0)
	{
		write (1, " ", 1);
		all->width--;
	}
}

void make_right_science(t_flag *all, char *s)
{
	if (all->nega)
		write(1, "-", 1);
	if (all->space)
		write(1, " ", 1);
	while (all->width > 0)
	{
		if (all->zero)
		{
			if (all->zero && all->dot == 0)
				write (1, "0", 1);
			else if (all->dott == 1 && all->dot == 0)
				write (1, " ", 1);
			else if (all->dott == 1 && all->dot == 1)
				write (1, "0", 1);
		}
		else
			write (1, " ", 1);
		all->width--;
	}
	if (all->plus)
		write(1, "+", 1);
	else if (all->negam)
		write(1, "-", 1);
	write (1, s, ft_strlen(s));
}

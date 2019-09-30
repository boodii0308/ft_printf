/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_float.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:49:40 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:26:55 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		make_float(t_flag *all, va_list ap)
{
	long double	f;
	char		*s;

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
	all->len = ft_nbrlen(f, 10);
	s = ft_itoa_base_dot(all, f);
	make_set_float(all, f);
	if (all->minus)
		make_left_float(all, s);
	else
		make_right_float(all, s);
	free(s);
}

void		make_set_float(t_flag *all, intmax_t f)
{
	(void)f;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (all->precision > all->len && all->dot)
			all->width = all->precision;
		else
			all->width = 0;
	}
	if ((all->plus || all->negam) && all->space)
		all->space--;
	if (all->negam && all->plus)
		all->plus--;
	all->width -= all->space + all->plus + all->negam;
	if (all->precision > 0)
		all->width -= all->precision + 1 + all->len;
	else
		all->width -= all->precision + all->len;
}

void		make_left_float(t_flag *all, char *s)
{
	if (all->space && !all->negam && !all->plus)
		all->lol += write(1, " ", 1);
	if (all->plus && !all->negam)
		all->lol += write(1, "+", 1);
	else if (all->nega || all->negam)
		all->lol += write(1, "-", 1);
	all->lol += write(1, s, ft_strlen(s));
	while (all->width > 0)
	{
		all->lol += write(1, " ", 1);
		all->width--;
	}
}

void		make_right_float(t_flag *all, char *s)
{
	while (all->width > 0)
	{
		if (all->zero)
		{
			if (all->zero && all->dot == 0)
				all->lol += write(1, "0", 1);
			else if (all->dott == 1 && all->dot == 0)
				all->lol += write(1, " ", 1);
			else if (all->dott == 1 && all->dot == 1)
				all->lol += write(1, "0", 1);
		}
		else
			all->lol += write(1, " ", 1);
		all->width--;
	}
	if (all->space && !all->negam && !all->plus)
		all->lol += write(1, " ", 1);
	else if (all->negam)
		all->lol += write(1, "-", 1);
	all->lol += write(1, s, ft_strlen(s));
}

char		*ft_itoa_point(long double n, int len, t_flag *all, int i)
{
	char		*s;
	int			l;
	int			g;

	if (!(s = (char *)malloc(sizeof(char) * len + 2)))
		return (NULL);
	s[len + 1] = '\0';
	s[i] = '.';
	while (++i <= len)
	{
		n *= 10;
		l = n;
		g = (n * 10);
		if (i == len && g % 10 >= 5)
			l++;
		if (l == 10)
		{
			s[i] = 0 + '0';
			check_add(&s, i - 1, l, all);
		}
		else
			s[i] = l + '0';
		n -= l;
	}
	return (s);
}

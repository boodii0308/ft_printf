/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_unsign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:49:06 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:27 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../includes/ft_printf.h"

void make_unsign(t_flag *all, va_list ap)
{
	uintmax_t i;
	int len;
	char *s;
	i = find_ulength(all, ap);

	len = ft_unsigned_nbr_len(i , 10);
	s = ft_itoa_base(i, 10);
	set_unsign(all, len);
	if (all->minus)
		unsign_left_side(all, s);
	else
		unsign_right_side(all, s);
	ft_strdel(&s);
}

void set_unsign(t_flag *all, int len)
{
	if (all->space)
		len++;
	if (!all->width)
	{
		if (all->astrix)
			all->width = all->astrix;
		else if (all->precision && all->dot)
			all->width = all->precision;
		else
			all->width = len;
	}
	if (all->precision > len)
		all->width -= all->precision + all->space + all->plus;
	else
		all->width -= len + all->space + all->plus;
	if (all->precision)
		all->precision -= len;
}

void unsign_left_side(t_flag *all, char *s)
{
	if (all->space)
		write(1, " ", 1);
	if (all->plus)
		write(1, "+", 1);
	else if (all->nega)
		write(1, "-", 1);
	while (all->precision > 0)
	{
		if (all->zero)
			write (1, "0", 1);
		else
			write (1, " ", 1);
		all->precision--;
	}
	write(1, s, ft_strlen(s));
	while (all->width > 0 )
	{
		write (1, " ", 1);
		all->width--;
	}
}

void unsign_right_side(t_flag *all, char *s)
{
	while (all->width > 0)
	{
		if (all->zero)
		{
			if (all->zero && all->dott == 0)
			{
				write (1, "0", 1);
			}
			else if (all->dott == 1 && all->dot == 0)
				write (1, " ", 1);
		}
		else
			write (1, " ", 1);
		all->width--;
	}
	while (all->precision > 0 )
	{
		if (all->zero || (all->precision && all->dot ))
			write (1, "0", 1);
		all->precision--;
	}
	if (all->space)
		write(1, " ", 1);
	if (all->plus)
		write(1, "+", 1);
	else if (all->nega)
		write(1, "-", 1);
	write (1, s , ft_strlen(s));
}

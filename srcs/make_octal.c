/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_octal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 11:00:57 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/05 23:40:59 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void make_octal(t_flag *all, va_list ap)
{
    uintmax_t i;
    int len;

	i = find_ulength(all, ap);
    len = ft_unsigned_nbr_len(i, 8);
    if (all->hash)
        len++;
    if (all->space)
        len++;
    if (all->plus)
        len++;
    if (all->precision)
        all->precision = (SIGN(all->precision) * all->precision) - len;
    if (!all->width)
    {
        if (all->astrix)
            all->width = all->astrix - len;
        else if (SIGN(all->precision) * all->precision)
            all->width = (SIGN(all->precision) * all->precision);
        else
            all->width = len;
    }
    if (all->minus)
        octal_left_side(all, i, len);
    else
        octal_right_side(all, i, len);

}

void octal_right_side(t_flag *all, uintmax_t i, int len)
{
    int t;

    t = (all->precision > len) ? all->precision : len;
    while (all->width > 0 && all->width > (SIGN(t) * t))
    {
        if (all->zero)
            write (1, "0", 1);
        else
            write (1, " ", 1);
        all->width--;
    }
    while ((SIGN(all->precision) * all->precision) > 0 && all->dot && all-> len)
    {
        write (1, "0", 1);
        all->precision--;
        all->width--;
    }
    if (all->plus)
        write(1, "+", 1);
    if (all->hash)
        write(1, "0", 1);
    ft_putstr_fd(ft_itoa_base(i, 8), 1);
    while (all->width != 0 && (SIGN(all->width) * all->width) > len)
        {
            write(1, " ", 1);
            all->width--;
        }
}

void octal_left_side(t_flag *all, uintmax_t i, int len)
{
    if (all->plus)
        write(1, "+", 1);
    while ((SIGN(all->precision) * all->precision) > len && all->dot && all->width > len)
    {
        write (1, "0", 1);
        all->precision--;
        all->width--;
    }
    if (all->hash)
        write(1, "0", 1);
    ft_putstr_fd(ft_itoa_base(i, 8), 1);
    while (all->width != 0 && (SIGN(all->width) * all->width) > len)
        {
            write(1, " ", 1);
            all->width--;
        }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 21:19:32 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/02 23:45:51 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void make_hex(t_flag *all, va_list ap)
{
    uintmax_t i;
    int len;

    i = find_ulength(all, ap);
    len = ft_unsigned_nbr_len(i, 16);
    if (!all->width)
    {
        if (all->astrix)
            all->width = all->astrix;
        else if (SIGN(all->precision) * all->precision > len)
            all->width = SIGN(all->precision) * all->precision;
        else
            all->width = len;
    }
    if (all->minus)
        hex_left_side(all, i , len);
    else
        hex_right_side(all, i, len);
}

void hex_right_side(t_flag *all, uintmax_t i, int len)
{
    if (all->hash)
        len += 2;
    if (all->space)
        len++;
    if (all->plus)
        len++;
    while (all->width > len && all->width > (SIGN(all->precision) * all->precision))
    {
        if (all->zero)
            write (1, "0", 1);
        else
            write (1, " ", 1);
        all->width--;
    }
    while (SIGN(all->precision) * all->precision > 0 && all->dot && all->width > len)
    {
        if (all->zero)
            write (1, "0", 1);
        else
            write (1, "0", 1);
        all->precision--;
        all->width--;
    }
    if (all->plus)
        write(1, "+", 1);
    put_hex_flag(all, i);
    while (all->width < 0 && (SIGN(all->width) * all->width) > len)
        {
            write(1, " ", 1);
            all->width++;
        }
}

void hex_left_side(t_flag *all, uintmax_t i, int len)
{
    if (all->space)
        len++;
    if (all->plus)
    {
        write(1, "+", 1);
        len++;
    }
    while (all->width > len && all->width > (SIGN(all->precision) * all->precision) && all->precision != 0)
    {
        if (all->zero)
            write (1, "0", 1);
        else
            write (1, " ", 1);
        all->width--;
    }
    while (SIGN(all->precision) * all->precision > 0 && all->dot && all->width > len)
    {
        if (all->zero)
            write (1, "0", 1);
        else
            write (1, "0", 1);
        all->precision--;
        all->width--;
    }
    put_hex_flag(all, i);
    while (all->width < 0 && (SIGN(all->width) * all->width) > len)
        {
            write(1, " ", 1);
            all->width++;
        }

}

void put_hex_flag(t_flag *all, uintmax_t i)
{
    if (all->flag == 'X')
    {
        if (all->space)
            ft_putchar(' ');
        if (all->hash)
            ft_putstr("0X");
        ft_putstr_fd(ft_itoa_base(i, 16), 1);
    }
    else
    {
        if (all->hash)
            ft_putstr("0x");
        ft_putstr_fd(ft_strtolower(ft_itoa_base(i, 16)), 1);
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 21:29:22 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/05 23:40:37 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    make_string(t_flag *all, va_list ap)
{
    char *str;
    int len;

    str = (char *)va_arg(ap, char *);
    if (str == NULL)
        str = "(null)";
    len = ft_strlen(str);
    if (!(all->width))
    {
        if (len <= all->astrix)
            all->width = all->astrix;
        else
            all->width = len;
    }
    if (all->minus)
        string_left_side(all, str, len);
    else
        string_right_side(all, str, len);
}
void string_right_side(t_flag *all, char *s, int len)
{
    if (all->space)
        ft_putchar(' ');
    while (all->width > len)
    {
        ft_putchar(' ');
        all->width--;
    }
    if (all->percent)
        ft_putchar('%');
    if (all->precision)
    {
        ft_putstr(ft_strncpy(ft_strnew(all->precision), s, all->precision));
    }
    else
    {
        ft_putstr(s);
    }
}

void string_left_side(t_flag *all, char *s, int len)
{
    if (all->space)
        ft_putchar(' ');
    if (all->percent)
        ft_putchar('%');
    if (all->precision)
    {
        ft_putstr(ft_strncpy(ft_strnew(all->precision), s, all->precision));
    }
    else
    {
        ft_putstr(s);
    }
    while (all->width >= len)
    {
        ft_putchar(' ');
        all->width--;
    }
}

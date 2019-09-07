/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_should2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:50:45 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:19 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char *ft_itoa_science(t_flag *all, long double n, int len)
{
	int				i;
	long double		last;
	char			*s2;
	char			*s1;
	char			*res;

	if (n < 0)
		n *= -1;
	i = len;
	while (i > 1)
	{
		all->pluss = 1;
		n /= 10;
	}

	i = n;
	last = n - i;

	s2 = ft_itoa_point(last, all->precision, all);
	i += all->makegreater;
	s1 = ft_itoa_base(i, 10);
	res = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	s1 = ft_science_end(all, len);
	s2 = ft_strjoin(res, s1);
	ft_strdel(&res);
	ft_strdel(&s1);
	return (s2);
}

char *ft_science_end(t_flag *all, int len)
{
	char *s;
	int i;
	int c;

	c = len;
	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * 5)))
		return (NULL);
	s[i++] = all->flag;
	s[i++] = all->pluss;
	s[i++] = (c > 10) ? c / 10 : 0;
	s[i++] = len % 10;
	s[i++] = '\0';
	return (s);
}

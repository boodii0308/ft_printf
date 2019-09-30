/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_should.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:26:26 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:26:47 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_nbrlen(int n, int base)
{
	int				i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n > 0 && 1 > n)
	{
		n *= base;
		i++;
	}
	while (n >= base)
	{
		n /= base;
		i++;
	}
	return (i);
}

int				ft_unsigned_nbr_len(uintmax_t n, int base)
{
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == 0)
		i = 1;
	else
	{
		while (n)
		{
			n = n / base;
			i++;
		}
	}
	return (i);
}

int				ft_signed_nbr_len(intmax_t n, int base)
{
	int				nbrlen;

	nbrlen = 0;
	if (n < 0)
	{
		n = n * -1;
		nbrlen++;
	}
	if (n == 0)
		nbrlen = 1;
	else
	{
		while (n)
		{
			n = n / base;
			nbrlen++;
		}
	}
	return (nbrlen);
}

char			*ft_itoa_base_dot(t_flag *all, long double n)
{
	intmax_t		i;
	long double		last;
	char			*s2;
	char			*s1;
	char			*res;

	if (n < 0)
		n *= -1;
	i = n;
	last = n - i;
	s2 = ft_itoa_point(last, all->precision, all, 0);
	if (s2[1] == '\0' && !all->hash)
	{
		if (last > 0.5)
			all->makegreater++;
		s2[0] = '\0';
	}
	i += all->makegreater;
	s1 = ft_itoa_signed_base(i, 10);
	res = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (res);
}

void			check_add(char **c, int pos, int n, t_flag *all)
{
	int				i;

	i = 0;
	if ((*c)[pos] == '9' && pos > 0)
		check_add(c, pos - 1, n, all);
	if (pos == 0)
		all->makegreater = 1;
	if ((*c)[pos] == '9')
	{
		(*c)[pos] = '0';
		i = 1;
	}
	else if ((*c)[pos] >= '0' && (*c)[pos] <= '8' && i == 0)
		(*c)[pos] += 1;
}

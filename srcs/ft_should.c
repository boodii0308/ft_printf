/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_should.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:26:26 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:13 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

int ft_nbrlen(int n, int base)
{
	int i;

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
long double power_of(intmax_t n, int r)
{
	int i;
	long double res;

	res = n;
	if (r == 0)
		return (1);
	i = 0;
	while (i < r)
	{
		res = res * 10;
	}
	return (res);
}

int		ft_unsigned_nbr_len(uintmax_t n, int base)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / base;
		i++;
	}
	return (i);
}

int		ft_signed_nbr_len(intmax_t n, int base)
{
	int nbrlen;

	nbrlen = 0;
	if (n < 0)
	{
		n = -n;
		nbrlen++;
	}
	while (n)
	{
		n = n / base;
		nbrlen++;
	}
	return (nbrlen);
}


char *ft_itoa_base_dot(t_flag *all, long double n)
{
	int				i;
	long double		last;
	char			*s2;
	char			*s1;
	char			*res;

	if (n < 0)
		n *= -1;
	i = n;
	last = n - i;

	s2 = ft_itoa_point(last, all->precision, all);
	i += all->makegreater;
	s1 = ft_itoa_base(i, 10);
	res = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);

	return (res);
}

char *ft_itoa_point(long double n, int len, t_flag *all)
{
	int i;
	char *s;
	int l;
	int g;
	i = 0;
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

void check_add(char **c, int pos, int n, t_flag *all)
{
	if ((*c)[pos] == '9' && pos > 0)
			check_add(c, pos - 1, n, all);
	if (pos == 0)
		all->makegreater = 1;
	if ((*c)[pos] >= '0' && (*c)[pos] <= '8')
		(*c)[pos] += 1;
	if ((*c)[pos] == '9')
		(*c)[pos] = '0';
}

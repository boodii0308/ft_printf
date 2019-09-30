/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_should2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:50:45 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:26:48 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char				*ft_itoa_science(t_flag *all, long double n, int len, int i)
{
	long double		last;
	char			*s2;
	char			*s1;
	char			*res;

	if (n < 0)
		n *= -1;
	i = n;
	last = n - i;
	s2 = ft_itoa_point(last, all->precision, all, 0);
	i += all->makegreater;
	if (i > 9)
	{
		i /= 10;
		all->negam--;
	}
	s1 = ft_itoa_base(i, 10);
	res = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	s1 = ft_science_end(all, len, 0);
	s2 = ft_strjoin(res, s1);
	ft_strdel(&res);
	ft_strdel(&s1);
	return (s2);
}

char				*ft_itoa_unsigned_base(uintmax_t n, int base)
{
	char			*s;
	size_t			len;
	uintmax_t		i;
	char			*radix;

	radix = "0123456789ABCDEF";
	len = ft_unsigned_nbr_len(n, base);
	i = n;
	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = '\0';
	s[--len] = radix[i % base];
	while (i /= base)
		s[--len] = radix[i % base];
	return (s);
}

char				*ft_itoa_signed_base(intmax_t n, int base)
{
	char			*s;
	size_t			len;
	intmax_t		i;
	char			*radix;

	radix = "0123456789ABCDEF";
	len = ft_signed_nbr_len(n, base);
	i = n;
	if (n < 0)
	{
		i = -n;
		len++;
	}
	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = '\0';
	s[--len] = radix[i % base];
	while (i /= base)
		s[--len] = radix[i % base];
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}

int					ft_sciencelen(t_flag *all, long double *n)
{
	int				i;
	int				len;
	long double		last;

	last = *n;
	i = last;
	len = ft_nbrlen(last, 10);
	while (len >= 2)
	{
		(*n) /= 10;
		len -= 1;
		all->pluss += 1;
	}
	while (len == 1 && i == 0)
	{
		all->negam += 1;
		(*n) *= 10;
		i = *n;
	}
	return (len);
}

char				*ft_science_end(t_flag *all, int len, int i)
{
	char			*s;

	(void)len;
	if (!(s = (char *)malloc(sizeof(char) * 5)))
		return (NULL);
	s[i++] = all->flag;
	s[i++] = (all->negam > 0) ? '-' : '+';
	if (all->negam)
	{
		if (all->negam > 9)
			s[i++] = (all->negam / 10) % 10 + '0';
		else
			s[i++] = '0';
		s[i++] = all->negam % 10 + '0';
	}
	else
	{
		if (all->pluss > 9)
			s[i++] = (all->pluss / 10) % 10 + '0';
		else
			s[i++] = '0';
		s[i++] = all->pluss % 10 + '0';
	}
	s[i++] = '\0';
	return (s);
}

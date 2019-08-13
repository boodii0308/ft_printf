/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:48:13 by tebatsai          #+#    #+#             */
/*   Updated: 2019/08/12 20:16:41 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void get_precition(t_flag *all,const char ***fmt)
{
	if (***fmt == '#')
		all->hash = 1;
	else if (***fmt == '0')
		all->zero = 1;
	else if (***fmt == '+')
		all->plus = 1;
	else if (***fmt == '-')
		all->minus = 1;
	else if (***fmt == '%')
		all->percent = 1;
}

void getflag(t_flag *all, va_list ap,const char **fmt)
{
	fmt++;
	while ("aAeEfFgGdiouxXcsp")
	while (**fmt == '%')
		fmt++;
	(void)ap;
	while(ft_strchar("#0*-+%", **fmt))
	{
		get_precition(all, &fmt);
	}
	if(ft_strchar("aAeEfFgGdiouxXcsp" **fmt)
	{
		all->flag = **fmt;
	}
}

t_flag *newin(void)
{
	t_flag *all;
	all = (t_flag*)malloc(sizeof(t_flag));
	all->minus = 0;
	all->plus = 0;
	all->space = 0;
	all->zero = 0;
	all->hash = 0;
	all->width = 0;
	all->percent = 0;
	all->precision = 0;
	all->length = 0;
	return (all);
}

void makeit(t_flag *all, va_list ap, const char *fmt)
{
	fmt--;
	while (*(fmt)++)
	{
		if (*fmt == '%')
		{
			getflag(all, ap, &fmt);
			ft()
		}
		write(1, &fmt, 1);
	}
}

int ft_printf(const char *fmt, ...)
{
	t_flag *all;
	va_list ap;

	all = newin();
	va_start(ap, fmt);
	makeit(all, ap, fmt);
	//if (!(validate(ap, fmt, all)))
	//	exit(0);
	va_end(ap);
	return (0);
}

int main(int arc, char **arv)
{
	char *s;
	t_flag *nq;
	nq = (t_flag*)malloc(sizeof(t_flag));
	nq->num =  100;
	s = arv[1];
	if (arc == 2)
	{
		printf(" %-10d \n", nq->num);
    	printf(" %010d \n", nq->num);
    	printf(" %-#10x \n", nq->num);
		printf(" %#x \n", nq->num);
		printf("%s\n", s);
		ft_printf("aadadfadf%s\n adfadf a", s);
	}
	return (0);
}

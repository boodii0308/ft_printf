/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:13:34 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 01:12:23 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	getflag(t_flag *all, va_list ap, const char **fmt)
{
	while (ft_strchr(FLAG, **fmt) && **fmt != '\0')
	{
		if (ft_strchr("#0-+*%' ", **fmt) && **fmt != '\0')
			get_flag(all, &fmt, ap);
		if (ft_strchr("123456789", **fmt) && **fmt != '\0')
			get_width(all, &fmt, ap);
		if (ft_strchr("hlL", **fmt) && **fmt != '\0')
			get_length(all, &fmt);
		if (ft_strchr(".", **fmt) && **fmt != '\0')
			get_precision(all, &fmt, ap);
	}
}

void	get_converse(t_flag *all, va_list ap, const char **fmt)
{
	(void)ap;
	if (ft_strchr(SPECIFIER, **fmt) && **fmt != '\0')
	{
		all->flag = **fmt;
		(*fmt)++;
	}
}

void	makeit(t_flag *all, va_list ap, const char *fmt)
{
	while (*(fmt) != '\0')
	{
		make_it(all, &fmt);
		if (*(fmt) == '%' && *(fmt + 1) != '%' && *fmt != '\0')
		{
			fmt++;
			if (!ft_strchr(" .*0123456789hLlj%zcsSpdiouxXfybeE#'-+", *fmt)
			&& *fmt != '\0')
			{
				fmt--;
				break ;
			}
			newin(all);
			if (ft_strchr(FLAG, *fmt) && *fmt != '\0')
				getflag(all, ap, &fmt);
			if (ft_strchr(SPECIFIER, *fmt))
				get_converse(all, ap, &fmt);
			if (all->flag)
				ft_print(all, ap);
			else
				ft_printf2(all);
		}
		else if (*fmt != '\0')
			fmt++;
	}
}

void	make_it(t_flag *all, const char **fmt)
{
	while (**(fmt) != '%' && **(fmt) != '\0')
	{
		all->lol += write(1, &(**fmt), 1);
		(*fmt)++;
	}
	while (**(fmt) == '%' && *(*(fmt) + 1) == '%')
	{
		(*fmt)++;
		all->lol += write(1, &(**(fmt)), 1);
		(*fmt)++;
		while (**(fmt) != '%' && **(fmt) != '\0')
		{
			all->lol += write(1, &(**(fmt)), 1);
			(*fmt)++;
		}
	}
}

int		ft_printf(const char *fmt, ...)
{
	t_flag	*all;
	va_list	ap;
	int		len;

	len = ft_strlen(fmt);
	if (len == 0)
		return (0);
	all = (t_flag*)malloc(sizeof(t_flag));
	all->lol = 0;
	va_start(ap, fmt);
	makeit(all, ap, fmt);
	va_end(ap);
	len = all->lol;
	free(all);
	return (len);
}

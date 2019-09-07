/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:49:23 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/05 23:40:32 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "../includes/ft_printf.h"

uintmax_t find_ulength(t_flag *all, va_list ap)
{
	(void)*all;
	(void)ap;
	if (all->longee == 2)
		return ((unsigned long long int)va_arg(ap, unsigned long long int));
	else if (all->longee == 1)
		return ((unsigned long int)va_arg(ap, unsigned long int));
	else if (all->shortee == 2)
		return ((unsigned char)va_arg(ap, unsigned int));
	else if (all->shortee == 1)
		return ((unsigned short int)va_arg(ap, unsigned int));
	else
	return ((unsigned int)va_arg(ap, unsigned int));
}

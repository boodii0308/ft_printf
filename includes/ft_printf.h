/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:17:36 by tebatsai          #+#    #+#             */
/*   Updated: 2019/08/12 19:17:16 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# define NUM(x) (x >= '0' && x <= '9')

typedef struct s_flag t_flag;
typedef struct s_cal t_cal;
struct					s_flag
{
	int num;
	int na;
	char c;
	char *str;
	float flo;
	double dou;
	char flag;
	int prec;
	char *comment;
	int bspace;
};

struct			s_cal
{
	struct s_flag *all;
};


int main(int arc, char **arv);
int ft_printf(const char *flag, ...);
int validate(va_list ap, char *fmt, t_flag *all);
#endif

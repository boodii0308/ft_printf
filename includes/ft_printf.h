/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:17:36 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/30 00:58:55 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <limits.h>
# include <inttypes.h>
# define SPECIFIER "cdifosuxXpeE"
# define FLAG " .*0123456789'hLl#-+%"
# define POS(x) (x *= (x < 0) ? -1: 1)
# define NEG(x) (x *= (x < 0) ? 1: -1)
# define SIGN(x) (x >= 0 ? 1: -1)

typedef struct	s_flag
{
	int			nprinted;
	int			lol;
	int			len;
	int			minus;
	int			plus;
	int			nega;
	int			space;
	int			zero;
	int			hash;
	int			percent;
	int			longee;
	int			longdub;
	int			shortee;
	int			dot;
	int			click;
	int			dott;
	int			makegreater;
	int			negam;
	int			pluss;
	int			width;
	int			precision;
	int			length;
	char		flag;
	int			trigger;
	int			astrix;
}				t_flag;
void			make_digit(t_flag *all, va_list ap);
void			int_set(t_flag *all, intmax_t i);
void			int_right_side(t_flag *all, intmax_t i);
void			int_left_side(t_flag *all, intmax_t i);
void			fixer_int(t_flag *all);
void			make_float(t_flag *all, va_list ap);
void			make_set_float(t_flag *all, intmax_t f);
void			make_left_float(t_flag *all, char *s);
void			make_right_float(t_flag *all, char *s);
void			make_unsign(t_flag *all, va_list ap);
void			set_unsign(t_flag *all, uintmax_t i);
void			unsign_left_side(t_flag *all, char *s);
void			unsign_right_side(t_flag *all, char *s);
void			make_hex(t_flag *all, va_list ap);
void			hex_right_side(t_flag *all, uintmax_t i);
void			hex_left_side(t_flag *all, uintmax_t i);
void			put_hex_flag(t_flag *all, uintmax_t i);
void			set_hex(t_flag *all, uintmax_t i);
void			last_hex(t_flag *all, uintmax_t i);
void			make_octal(t_flag *all, va_list ap);
void			octal_right_side(t_flag *all, char *s);
void			octal_left_side(t_flag *all, char *s);
void			set_octal(t_flag *all, uintmax_t i);
void			make_char(t_flag *all, va_list ap);
void			make_string(t_flag *all, va_list ap);
void			string_set(t_flag *all);
void			string_right_side(t_flag *all, char *s);
void			string_left_side(t_flag *all, char *s);
void			make_pointer(t_flag *all, va_list ap);
void			make_left_pointer(t_flag *all, char *s, int len, int size);
void			make_right_pointer(t_flag *all, char *s, int len, int size);
void			get_flag(t_flag *all, const char ***fmt, va_list ap);
void			get_length(t_flag *all, const char ***fmt);
void			get_width(t_flag *all, const char ***fmt, va_list ap);
void			get_precision(t_flag *all, const char ***fmt, va_list ap);
void			print(t_flag *all, va_list ap);
void			getflag(t_flag *all, va_list ap, const char **fmt);
void			makeit(t_flag *all, va_list ap, const char *fmt);
void			get_converse(t_flag *all, va_list ap, const char **fmt);
void			make_it(t_flag *all, const char **fmt);
void			newin(t_flag *all);
void			ft_print(t_flag *all, va_list ap);
int				ft_printf(const char *flag, ...);
void			ft_printf2(t_flag *all);
void			make_left_printf(t_flag *all);
void			make_right_printf(t_flag *all);
void			make_science(t_flag *all, va_list ap);
char			*ft_science_end(t_flag *all, int len, int i);
char			*ft_itoa_science(t_flag *all, long double n, int len, int i);
void			make_set_science(t_flag *all, intmax_t f, int len);
void			make_left_science(t_flag *all, char *s);
void			make_right_science(t_flag *all, char *s);
int				ft_sciencelen(t_flag *all, long double *n);
void			check_add(char **c, int pos, int n, t_flag *all);
char			*ft_itoa_signed_base(intmax_t n, int base);
char			*ft_itoa_unsigned_base(uintmax_t n, int base);
int				ft_nbrlen(int n, int base);
int				ft_signed_nbr_len(intmax_t n, int base);
int				ft_unsigned_nbr_len(uintmax_t n, int base);
char			*ft_itoa_base_dot(t_flag *all, long double n);
char			*ft_itoa_point(long double n, int len, t_flag *all, int i);
uintmax_t		find_ulength(t_flag *all, va_list ap);
#endif

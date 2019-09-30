/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:48:13 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/29 21:16:41 by tebatsai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	int		i;
	int		prec;
	int		nonprint;
	int		j;
	int		k;
	int		n;
	unsigned int u;
	long	l;
	short int shor;
	unsigned long	ul;
	long long ll;
	long long sl;
	unsigned long long ull;
	float	f;
	double	d;
	long double	ld;
	long double	ld1;
	long double	ld2;
	double	ld3;
	double	ld4;
	//char	*s = "fucko";
	//char	*ss = NULL;

	i = 0;
	u = 111;
	prec = 5;
	nonprint = 15;
	j = -75;
	k = 500111222;
	i = 75;
	l = -5123123123;
	ul = 5123123123;
	ll = -9223372036854775807;
	sl = 9223372036854775807;
	ull = 18446744073709551615U;
	d = 15338.69;
	n = 0;
	f  = 2345.1349999999;
	d  = 2345.12345678911111111122222222223333333333444444444455555555556666666666777777777788888888889999999999;
	ld = 12.1234567511111111122222222223333333333444444444455555555556666666666777777777788888888889999999999;
	ld1 = 0.0000000000000000000000000000000000000000000000000000000000000000000000000000000009999999999;
	ld2 = 142515.111111111122222222223333333333444444444455555555556666666666777777777788888888889999999999;
	ld3 = 42.2456456456;
	ld4 = 1300000;
	shor = -32768;



    printf("ls1->{%05.*d}\n", -15, 42); 
    printf("ls2->{%.*d}\n", -5, 42);

    ft_printf("ft1->{%05.*d}\n", -15, 42);
    ft_printf("ft2->{%.*d}\n", -5, 42);
    // ft_printf("ft->%5.3f\n", 7.3);
    // ft_printf("ft->%-5.3f\n", 7.3);
    // ft_printf("ft->%.7Lf\n", 0.999999l);
    // ft_printf("ft->%.7Lf\n", -0.999999l);
    // ft_printf("ft->%.8Lf\n", 999.9999999l);
    // ft_printf("ft->%.8Lf\n", 0.999999l);
    // ft_printf("ft->%.8Lf\n", -0.999999l);
    // ft_printf("ft->%.8Lf\n", 43.4399999l);
    // ft_printf("ft->%.8Lf\n", -5.0299999l);
    // ft_printf("ft->%.8Lf\n", 3.9999999l);
    // ft_printf("ft->%f\n", (double)INT_MIN);
    // ft_printf("ft->%f\n", (double)INT_MIN - 1);
    // ft_printf("ft->%f\n", (double)INT_MAX + 1);


//  ft_printf("%.2d ft->this %.0f float\n\n", ++iiii, 1.6);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, 7.4);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, 1.0);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, -3.85);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, 573.924);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, -958.125);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, 23.00041);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, 0.000039);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, -7.00036);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, -0.00032);
//  ft_printf("%.2d ft->%.7f\n\n", ++iiii, 0.999999);
//  ft_printf("%.2d ft->%.7f\n\n", ++iiii, -0.999999);
//  ft_printf("%.2d ft->%.8f\n\n", ++iiii, 0.999999);
//  ft_printf("%.2d ft->%.8f\n\n", ++iiii, -0.999999);
//  ft_printf("%.2d ft->%.8f\n\n", ++iiii, 43.4399999);
//  ft_printf("%.2d ft->%.8f\n\n", ++iiii, -5.0299999);
//  ft_printf("%.2d ft->%5.0f\n\n", ++iiii, 7.3);
//  ft_printf("%.2d ft->%5.0f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->%5.1f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->%-5.0f\n\n", ++iiii, 7.3);
//  ft_printf("%.2d ft->%-5.0f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->%-5.1f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% 5.0f\n\n", ++iiii, 7.3);
//  ft_printf("%.2d ft->% 5.0f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% 5.1f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% 5.3f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% 5.6f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% -5.0f\n\n", ++iiii, 7.3);
//  ft_printf("%.2d ft->% -5.0f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% -5.1f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% -5.3f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->% -5.6f\n\n", ++iiii, -7.3);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, d);
//  ft_printf("%.2d ft->%.0f\n\n", ++iiii, -d);
//  ft_printf("%.2d ft->%.7Lf\n\n", ++iiii, 0.999999l);
//  ft_printf("%.2d ft->%.7Lf\n\n", ++iiii, -0.999999l);
//  ft_printf("%.2d ft->%.8Lf\n\n", ++iiii, 999.9999999l);
//  ft_printf("%.2d ft->%.8Lf\n\n", ++iiii, 0.999999l);
//  ft_printf("%.2d ft->%.8Lf\n\n", ++iiii, -0.999999l);
//  ft_printf("%.2d ft->%.8Lf\n\n", ++iiii, 43.4399999l);
//  ft_printf("%.2d ft->%.8Lf\n\n", ++iiii, -5.0299999l);
//  ft_printf("%.2d ft->%.8Lf\n\n", ++iiii, 3.9999999l);
//  ft_printf("%.2d ft->%.0Lf\n\n", ++iiii, ld); 
//  ft_printf("%.2d ft->%.0Lf\n\n", ++iiii, -ld);
//  ft_printf("%.2d ft->%f\n\n", ++iiii, (double)INT_MIN);
//  ft_printf("%.2d ft->%f\n\n", ++iiii, (double)INT_MIN - 1);
//  ft_printf("%.2d ft->%f\n\n", ++iiii, (double)INT_MAX + 1);
  // printf("%.2d ls->%%\n\n\n", ++iiii, ++iiii);
    // printf("%.2d ls->%.7s\n\n\n", ++iiii, ++iiii, "hello");
    // printf("%.2d ls->%.s\n\n\n", ++iiii, ++iiii, "hello");
    // printf("%.2d ls->%.0s\n\n\n", ++iiii, ++iiii, "hello");
    // printf("%.2d ls->%.2s%.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%.7s%.2s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%.5s%7s\n\n\n", ++iiii, ++iiii, "yo""boi");
    // printf("%.2d ls->%7.5s\n\n\n", ++iiii, ++iiii, "yolo");
    // printf("%.2d ls->%-7.5s\n\n\n", ++iiii, ++iiii, "yolo");
    // printf("%.2d ls->%7.7s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%3.7s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%7.7s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%3.7s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%7.3s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%3.3s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%7.3s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%3.3s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%7.7s%7.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%3.7s%7.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%7.7s%3.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%3.7s%3.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // printf("%.2d ls->%.9s\n\n\n", ++iiii, ++iiii, "NULL");
    // printf("%.2d ls->%.s\n\n\n", ++iiii, ++iiii, "NULL");
    // printf("%.2d ls->%.0s\n\n\n", ++iiii, ++iiii, "NULL");
    // printf("%.2d ls->%.s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%.9s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%.09s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%.09s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%.01s\n\n\n", ++iiii, ++iiii, "");
    // printf("%.2d ls->%.03s\n\n\n", ++iiii, ++iiii, "");
    // printf("%.2d ls->%.09s\n\n\n", ++iiii, ++iiii, "");
    // printf("%.2d ls->%3.s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%10.s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%3.s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%10.s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%-3.s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%-8.s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%-3.s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%-8.s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%-3.1s\n\n\n", ++iiii, ++iiii, "");
    // printf("%.2d ls->%3.6s\n\n\n", ++iiii, ++iiii, "");
    // printf("%.2d ls->%6.6s\n\n\n", ++iiii, ++iiii, "");
    // printf("%.2d ls->%-3.8s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%-10.8s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%-3.8s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%-10.8s\n\n\n", ++iiii, ++iiii, NULL);
    // printf("%.2d ls->%-.00s\n\n\n", ++iiii, ++iiii, s);
    // printf("%.2d ls->%-.09s\n\n\n", ++iiii, ++iiii, s);

	// iiii = 0;





	
    // ft_printf("%.2d ft->%%\n\n\n", ++iiii, ++iiii);
    // ft_printf("%.2d ft->%.7s\n\n\n", ++iiii, ++iiii, "hello");
    // ft_printf("%.2d ft->%.s\n\n\n", ++iiii, ++iiii, "hello");
    // ft_printf("%.2d ft->%.0s\n\n\n", ++iiii, ++iiii, "hello");
    // ft_printf("%.2d ft->%.2s%.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%.7s%.2s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%.5s%7s\n\n\n", ++iiii, ++iiii, "yo""boi");
    // ft_printf("%.2d ft->%7.5s\n\n\n", ++iiii, ++iiii, "yolo");
    // ft_printf("%.2d ft->%-7.5s\n\n\n", ++iiii, ++iiii, "yolo");
    // ft_printf("%.2d ft->%7.7s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%3.7s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%7.7s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%3.7s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%7.3s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%3.3s%7.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%7.3s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%3.3s%3.7s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%7.7s%7.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%3.7s%7.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%7.7s%3.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%3.7s%3.3s\n\n\n", ++iiii, ++iiii, "hello""world");
    // ft_printf("%.2d ft->%.9s\n\n\n", ++iiii, ++iiii, "NULL");
    // ft_printf("%.2d ft->%.s\n\n\n", ++iiii, ++iiii, "NULL");
    // ft_printf("%.2d ft->%.0s\n\n\n", ++iiii, ++iiii, "NULL");
    // ft_printf("%.2d ft->%.s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%.9s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%.09s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%.09s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%.01s\n\n\n", ++iiii, ++iiii, "");
    // ft_printf("%.2d ft->%.03s\n\n\n", ++iiii, ++iiii, "");
    // ft_printf("%.2d ft->%.09s\n\n\n", ++iiii, ++iiii, "");
    // ft_printf("%.2d ft->%3.s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%10.s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%3.s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%10.s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%-3.s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%-8.s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%-3.s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%-8.s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%-3.1s\n\n\n", ++iiii, ++iiii, "");
    // ft_printf("%.2d ft->%3.6s\n\n\n", ++iiii, ++iiii, "");
    // ft_printf("%.2d ft->%6.6s\n\n\n", ++iiii, ++iiii, "");
    // ft_printf("%.2d ft->%-3.8s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%-10.8s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%-3.8s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%-10.8s\n\n\n", ++iiii, ++iiii, NULL);
    // ft_printf("%.2d ft->%-.00s\n\n\n", ++iiii, ++iiii, s);
    // ft_printf("%.2d ft->%-.09s\n\n\n", ++iiii, ++iiii, s);


    // ft_printf("ft->%-8.5u\n\n\n\n", ++iiii, ++iiii, 34);
    // ft_printf("ft->%-8.5u\n\n\n\n", ++iiii, ++iiii, 0);
    // ft_printf("ft->%-3.7u\n\n\n\n", ++iiii, ++iiii, 3267);
    // ft_printf("ft->%08.5u\n\n\n\n", ++iiii, ++iiii, 34);
    // ft_printf("ft->%08.5u\n\n\n\n", ++iiii, ++iiii, 0);
    // ft_printf("ft->%08.3u\n\n\n\n", ++iiii, ++iiii, 83);
    // ft_printf("ft->%.0u\n\n\n\n", ++iiii, ++iiii, 0);
    // ft_printf("ft->%.u\n\n\n\n", ++iiii, ++iiii, 0);
    // ft_printf("ft->%5.0u\n\n\n\n", ++iiii, ++iiii, 0);
    // ft_printf("ft->%08.3u\n\n\n\n", ++iiii, ++iiii, 8375);
    // ft_printf("ft->%08.5u\n\n\n\n", ++iiii, ++iiii, 0);
    // ft_printf("ft->%08.5u\n\n\n\n", ++iiii, ++iiii, 34);



    // printf("%.2d ls->%07i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -54);
    // printf("%.2d ls->%-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->%+-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%+-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->%08.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->%010.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%08.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%08.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->%08.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->%-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->this % i number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // printf("%.2d ls->this % i number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3);
    // printf("%.2d ls->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // printf("%.2d ls->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // printf("%.2d ls->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (int)(-2147483678));
    // printf("%.2d ls->% 7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 33);
    // printf("%.2d ls->% 7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // printf("%.2d ls->% 3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% 5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 52625);
    // printf("%.2d ls->% 4i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 94827);
    // printf("%.2d ls->% -7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // printf("%.2d ls->% -5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2562);
    // printf("%.2d ls->% -4i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2464);
    // printf("%.2d ls->%+5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 35);
    // printf("%.2d ls->%+7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+24i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // printf("%.2d ls->% .5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2);
    // printf("%.2d ls->% .3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% .4i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 5263);
    // printf("%.2d ls->% .3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 13862);
    // printf("%.2d ls->% 8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->% 10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->% 8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% 8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->% 8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->% 3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3267);
    // printf("%.2d ls->% 3.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 6983);
    // printf("%.2d ls->% -10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->% -8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->% -3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->% -3.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // printf("%.2d ls->%+8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->%+10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%+8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->%+8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->%+-8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->%+-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%+-8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+-8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->%+-8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->%+-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->%+-3.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // printf("%.2d ls->% lli\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807ll);
    // printf("%.2d ls->% li\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807l);
    // printf("%.2d ls->% hi\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (short)32767);
    // printf("%.2d ls->% hhi\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (char)(127));
    // printf("%.2d ls->%.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%-5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%-5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+-5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+-5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%07d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -54);
    // printf("%.2d ls->%-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->%+-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%+-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->%08.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->%010.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%08.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%08.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->%08.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->%-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // printf("%.2d ls->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3);
    // printf("%.2d ls->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // printf("%.2d ls->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // printf("%.2d ls->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (int)(-2147483678));
    // printf("%.2d ls->% 7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 33);
    // printf("%.2d ls->% 7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // printf("%.2d ls->% 3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% 5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 52625);
    // printf("%.2d ls->% 4d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 94827);
    // printf("%.2d ls->% -7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // printf("%.2d ls->% -5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2562);
    // printf("%.2d ls->% -4d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2464);
    // printf("%.2d ls->%+5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 35);
    // printf("%.2d ls->%+7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+24d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // printf("%.2d ls->% .5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2);
    // printf("%.2d ls->% .3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% .4d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 5263);
    // printf("%.2d ls->% .3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 13862);
    // printf("%.2d ls->% 8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->% 10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->% 8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->% 8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->% 8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->% 3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3267);
    // printf("%.2d ls->% 3.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 6983);
    // printf("%.2d ls->% -10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->% -8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->% -3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->% -3.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // printf("%.2d ls->%+8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->%+10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%+8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->%+8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->%+-8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // printf("%.2d ls->%+-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // printf("%.2d ls->%+-8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+-8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // printf("%.2d ls->%+-8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // printf("%.2d ls->%+-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // printf("%.2d ls->%+-3.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // printf("%.2d ls->% lld\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807ll);
    // printf("%.2d ls->% ld\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807l);
    // printf("%.2d ls->% hd\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (short)32767);
    // printf("%.2d ls->% hhd\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (char)(127));
    // printf("%.2d ls->%.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%-5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%-5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+-5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // printf("%.2d ls->%+-5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);

	// iiii = 0;  
	// ft_printf("%.2d ft->%07i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -54);
    // ft_printf("%.2d ft->%-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->%+-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%+-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->%08.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->%010.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%08.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%08.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->%08.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->%0-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%0-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->this % i number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // ft_printf("%.2d ft->this % i number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3);
    // ft_printf("%.2d ft->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // ft_printf("%.2d ft->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // ft_printf("%.2d ft->% i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (int)(-2147483678));
    // ft_printf("%.2d ft->% 7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 33);
    // ft_printf("%.2d ft->% 7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // ft_printf("%.2d ft->% 3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% 5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 52625);
    // ft_printf("%.2d ft->% 4i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 94827);
    // ft_printf("%.2d ft->% -7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // ft_printf("%.2d ft->% -5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2562);
    // ft_printf("%.2d ft->% -4i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2464);
    // ft_printf("%.2d ft->% +5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 35);
    // ft_printf("%.2d ft->% +7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% +24i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // ft_printf("%.2d ft->% .5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2);
    // ft_printf("%.2d ft->% .3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% .4i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 5263);
    // ft_printf("%.2d ft->% .3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 13862);
    // ft_printf("%.2d ft->% 8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->% 10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% 8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% 8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->% 8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% 3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3267);
    // ft_printf("%.2d ft->% 3.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 6983);
    // ft_printf("%.2d ft->% -10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% -8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% -3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->% -3.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // ft_printf("%.2d ft->% +8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->% +10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% +8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% +8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->% +8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% +-8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->% +-10.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% +-8.5i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% +-8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->% +-8.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% +-3.7i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->% +-3.3i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // ft_printf("%.2d ft->% lli\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807ll);
    // ft_printf("%.2d ft->% li\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807l);
    // ft_printf("%.2d ft->% hi\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (short)32767);
    // ft_printf("%.2d ft->% hhi\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (char)(127));
    // ft_printf("%.2d ft->%.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%-5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%-5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+-5.0i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+-5.i\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%07d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -54);
    // ft_printf("%.2d ft->%-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->%+-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%+-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->%08.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->%010.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%08.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%08.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->%08.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->%0-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->%0-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // ft_printf("%.2d ft->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3);
    // ft_printf("%.2d ft->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 17);
    // ft_printf("%.2d ft->this % d number\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // ft_printf("%.2d ft->% d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (int)(-2147483678));
    // ft_printf("%.2d ft->% 7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 33);
    // ft_printf("%.2d ft->% 7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // ft_printf("%.2d ft->% 3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% 5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 52625);
    // ft_printf("%.2d ft->% 4d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 94827);
    // ft_printf("%.2d ft->% -7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -14);
    // ft_printf("%.2d ft->% -5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2562);
    // ft_printf("%.2d ft->% -4d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2464);
    // ft_printf("%.2d ft->% +5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 35);
    // ft_printf("%.2d ft->% +7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% +24d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2147483647);
    // ft_printf("%.2d ft->% .5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 2);
    // ft_printf("%.2d ft->% .3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% .4d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 5263);
    // ft_printf("%.2d ft->% .3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 13862);
    // ft_printf("%.2d ft->% 8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->% 10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% 8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% 8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->% 8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% 3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 3267);
    // ft_printf("%.2d ft->% 3.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 6983);
    // ft_printf("%.2d ft->% -10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% -8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% -3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->% -3.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // ft_printf("%.2d ft->% +8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->% +10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% +8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% +8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->% +8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% +-8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 34);
    // ft_printf("%.2d ft->% +-10.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -216);
    // ft_printf("%.2d ft->% +-8.5d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->% +-8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 8375);
    // ft_printf("%.2d ft->% +-8.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8473);
    // ft_printf("%.2d ft->% +-3.7d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -2375);
    // ft_printf("%.2d ft->% +-3.3d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, -8462);
    // ft_printf("%.2d ft->% lld\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807ll);
    // ft_printf("%.2d ft->% ld\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 9223372036854775807l);
    // ft_printf("%.2d ft->% hd\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (short)32767);
    // ft_printf("%.2d ft->% hhd\n\n\n\n\n", ++iiii, ++iiii, ++iiii, (char)(127));
    // ft_printf("%.2d ft->%.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%-5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%-5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+-5.0d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
    // ft_printf("%.2d ft->%+-5.d\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 0);
 	// ft_printf("%010x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 542);
  	// ft_printf("%#8x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 42);
  	// ft_printf("%#08x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 42);
	// ft_printf("%#-08x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, 42);
    // ft_printf("%.2d ft->%-8.5x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 34);
    // ft_printf("%.2d ft->%-8.5x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-2.7x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 3267);
    // ft_printf("%.2d ft->%08.5x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 34);
    // ft_printf("%.2d ft->%08.5x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%08.3x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 8375);
    // ft_printf("%.2d ft->this %#x number\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%#3x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%#-3x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%.0x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%.x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%5.0x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%5.x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-5.0x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-5.x\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-8.5X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 34);
    // ft_printf("%.2d ft->%-8.5X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-2.7X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 3267);
    // ft_printf("%.2d ft->%08.5X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 34);
    // ft_printf("%.2d ft->%08.5X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%08.3X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 8375);
    // ft_printf("%.2d ft->this %#X number\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%#3X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%#-3X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%.0X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%.X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%5.0X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%5.X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-5.0X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);
    // ft_printf("%.2d ft->%-5.X\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, 0);

    // printf("%.2d ls ->%%04.2i 42 == |%04.2i|\n\n\n\n\n\n", ++iiii, ++iiii, ++iiii, +iiii, iiii,42);
    // printf("%.2d ls ->%3o\n",0);
    // printf("%.2d ls ->%6o\n",52625);
    // printf("%.2d ls ->%2o\n",94827);
    // printf("%.2d ls ->%-7o\n",33);
    // printf("%.2d ls ->%-3o\n",0);
    // printf("%.2d ls ->%-6o\n",52625);
    // printf("%.2d ls ->%-4o\n",9648627);
    // printf("%.2d ls ->%.5o\n",21);
    // printf("%.2d ls ->%.3o\n",0);
    // printf("%.2d ls ->%.5o\n",5263);
    // printf("%.2d ls ->%.3o\n",938862);
    // printf("%.2d ls ->%05o\n",43);
    // printf("%.2d ls ->%03o\n",0);
    // printf("%.2d ls ->%07o\n",698334);
    // printf("%.2d ls ->%8.5o\n",34);
    // printf("%.2d ls ->%8.5o\n",0);
    // printf("%.2d ls ->%8.3o\n",8375);
    // printf("%.2d ls ->%2.7o\n",3267);
    // printf("%.2d ls ->%3.3o\n",6983);
    // printf("%.2d ls ->%-8.5o\n",34);
    // printf("%.2d ls ->%-8.5o\n",0);
    // printf("%.2d ls ->%-8.3o\n",8375);
    // printf("%.2d ls ->%-2.7o\n",3267);
    // printf("%.2d ls ->%-3.3o\n",6983);
    // printf("%.2d ls ->%08.5o\n",34);
    // printf("%.2d ls ->%08.5o\n",0);
    // printf("%.2d ls ->%08.3o\n",8375);
    // printf("%.2d ls ->%02.7o\n",3267);
    // printf("%.2d ls ->%03.3o\n",6983);
    // printf("%.2d ls ->%-8.5o\n",34);
    // printf("%.2d ls ->%-8.5o\n",0);
    // printf("%.2d ls ->%-8.3o\n",8375);
    // printf("%.2d ls ->%-2.7o\n",3267);
    // printf("%.2d ls ->%-3.3o\n",6983);
    // printf("%.2d ls ->%37llo\n",522337203685470ull);
    // printf("%.2d ls ->this %#o number\n",17);
    // printf("%.2d ls ->%#o\n",3);
    // printf("%.2d ls ->%#o\n",4294967295u);
    // printf("%.2d ls ->%#7o\n",33);
    // printf("%.2d ls ->%#3o\n",0);
    // printf("%.2d ls ->%#6o\n",52625);
    // printf("%.2d ls ->%#2o\n",94827);
    // printf("%.2d ls ->%#-7o\n",33);
    // printf("%.2d ls ->%#-3o\n",0);
    // printf("%.2d ls ->%#-6o\n",52625);
    // printf("%.2d ls ->%#-4o\n",9648627);
    // printf("%.2d ls ->%#llo\n",ull);
    // printf("%.2d ls ->%#lo\n",ul);
    // printf("%.2d ls ->%#ho\n",(unsigned short)65535);
    // printf("%.2d ls ->%#hho\n",(unsigned char)255);
    // printf("%.2d ls ->%.0o\n",0);
    // printf("%.2d ls ->%.o\n",0);
    // printf("%.2d ls ->%5.0o\n",0);
    // printf("%.2d ls ->%5.o\n",0);
    // printf("%.2d ls ->%-5.0o\n",0);
    // printf("%.2d ls ->%-5.o\n",0);
	// iiii = 0;
	// ft_printf("%.2d ft ->%7o\n",33);
    // ft_printf("%.2d ft ->%3o\n",0);
    // ft_printf("%.2d ft ->%6o\n",52625);
    // ft_printf("%.2d ft ->%2o\n",94827);
    // ft_printf("%.2d ft ->%-7o\n",33);
    // ft_printf("%.2d ft ->%-3o\n",0);
    // ft_printf("%.2d ft ->%-6o\n",52625);
    // ft_printf("%.2d ft ->%-4o\n",9648627);
    // ft_printf("%.2d ft ->%.5o\n",21);
    // ft_printf("%.2d ft ->%.3o\n",0);
    // ft_printf("%.2d ft ->%.5o\n",5263);
    // ft_printf("%.2d ft ->%.3o\n",938862);
    // ft_printf("%.2d ft ->%05o\n",43);
    // ft_printf("%.2d ft ->%03o\n",0);
    // ft_printf("%.2d ft ->%07o\n",698334);
    // ft_printf("%.2d ft ->%8.5o\n",34);
    // ft_printf("%.2d ft ->%8.5o\n",0);
    // ft_printf("%.2d ft ->%8.3o\n",8375);
    // ft_printf("%.2d ft ->%2.7o\n",3267);
    // ft_printf("%.2d ft ->%3.3o\n",6983);
    // ft_printf("%.2d ft ->%-8.5o\n",34);
    // ft_printf("%.2d ft ->%-8.5o\n",0);
    // ft_printf("%.2d ft ->%-8.3o\n",8375);
    // ft_printf("%.2d ft ->%-2.7o\n",3267);
    // ft_printf("%.2d ft ->%-3.3o\n",6983);
    // ft_printf("%.2d ft ->%08.5o\n",34);
    // ft_printf("%.2d ft ->%08.5o\n",0);
    // ft_printf("%.2d ft ->%08.3o\n",8375);
    // ft_printf("%.2d ft ->%02.7o\n",3267);
    // ft_printf("%.2d ft ->%03.3o\n",6983);
    // ft_printf("%.2d ft ->%-8.5o\n",34);
    // ft_printf("%.2d ft ->%-8.5o\n",0);
    // ft_printf("%.2d ft ->%-8.3o\n",8375);
    // ft_printf("%.2d ft ->%-2.7o\n",3267);
    // ft_printf("%.2d ft ->%-3.3o\n",6983);
    // ft_printf("%.2d ft ->%37llo\n",522337203685470ull);
    // ft_printf("%.2d ft ->this %#o number\n",17);
    // ft_printf("%.2d ft ->%#o\n",3);
    // ft_printf("%.2d ft ->%#o\n",4294967295u);
    // ft_printf("%.2d ft ->%#7o\n",33);
    // ft_printf("%.2d ft ->%#3o\n",0);
    // ft_printf("%.2d ft ->%#6o\n",52625);
    // ft_printf("%.2d ft ->%#2o\n",94827);
    // ft_printf("%.2d ft ->%#-7o\n",33);
    // ft_printf("%.2d ft ->%#-3o\n",0);
    // ft_printf("%.2d ft ->%#-6o\n",52625);
    // ft_printf("%.2d ft ->%#-4o\n",9648627);
    // ft_printf("%.2d ft ->%#llo\n",ull);
    // ft_printf("%.2d ft ->%#lo\n",ul);
    // ft_printf("%.2d ft ->%#ho\n",(unsigned short)65535);
    // ft_printf("%.2d ft ->%#hho\n",(unsigned char)255);
    // ft_printf("%.2d ft ->%.0o\n",0);
    // ft_printf("%.2d ft ->%.o\n",0);
    // ft_printf("%.2d ft ->%5.0o\n",0);
    // ft_printf("%.2d ft ->%5.o\n",0);
    // ft_printf("%.2d ft ->%-5.0o\n",0);
    // ft_printf("%.2d ft ->%-5.o\n",0);
	
//   ft_printf("%5d\n",-42);
//   ft_printf("%+10.5d\n",4242);
//   ft_printf("%03.2d\n",0);
//   ft_printf("%03.2d\n",1);

	// ft_printf("ft {%*d\n\n",-5, 42);
	// printf("lc {%*d\n\n",-5, 42);
	// ft_printf("ft {%+-.*d\n\n", ,16, 42);
	// printf("lc {%+-.*d\n\n", ,16, 42);
	// ft_printf("ft {%15.*d\n\n",10, 42);
	// printf("lc {%15.*d\n\n", ,10, 42);

	// ft_printf("ft {%13.*d\n\n",-5, 77777);
	// printf("lc {%13.*d\n\n",-5, 77777);
	// ft_printf("ft {%'*i\n\n", ,16, 74655132);
	// printf("lc {%'*i\n\n", ,16, 74655132);
	// ft_printf("ft {%0d\n\n",k);
	// printf("lc {%0d\n\n",k);

	// ft_printf("ft {%-*Lf\n\n",-5, ll);s
	// printf("lc {%-*Ld\n\n",-5, ll);
	// ft_printf("ft {%+d -%13f\n\n", ,16, 42);
	// printf("lc {%+d -%13f\n\n", ,16, 42);
	// ft_printf("ft {%.*lfdd %-3i\n\n",10, l, 42);
	// printf("ls {%.*lfdd %-3i\n\n",10, l, 42);
	// ft_printf("%.110Lf\n\n",ld1);
	// printf("%.110Lf\n\n",ld1);
	// ft_printf("ft %10x\n\n",42);
	// printf("lc %10x\n\n",42);


	/* asterisk */
	// ft_printf("ft %.*f\n\n",3, ld3);
	// ft_printf("ft %.*f\n\n",-10, ld3); // negative precision
	// ft_printf("ft %.*i\n\n",-10, i);
	// printf("ORIG>\t[%+ld]\n\n",4000000000);
	// printf("lc %.*f\n\n",3, ld3);
	// printf("lc %.*f\n\n",-100, ld3);
	// printf("lc %.*i\n\n",-10, i);

	/* %n */
	// printf("n %i\n\n",n);
	// printf("123456788\n%5n\n",&n);
	// printf("n %i\n\n",n);

	/* feg */
	// ft_printf("ft %f\n\n",DBL_NAN);

	// ft_printf("ft %g\n\n",(double)42);
	// ft_printf("ft %G\n\n",(double)42);
	// printf("lc %g\n\n",(double)42);
	// printf("lc %G\n\n",(double)42);
	// ft_printf("f ft %f\n\n",ld3);
	// ft_printf("f ft %f\n\n",ld4);
	// ft_printf("e ft %e\n\n",ld3);
	// ft_printf("e ft %e\n\n",ld4);
	// ft_printf("g ft %.4g\n\n",ld3);
	// ft_printf("g ft %.4g\n\n",ld4);
	// ft_printf("\n");
	// printf("f ls %f\n\n",ld3);
	// printf("f ls %f\n\n",ld4);
	// printf("e ls %e\n\n",ld3);
	// printf("e ls %e\n\n",ld4);
	// printf("g ls %.4g\n\n",ld3);
	// printf("g ls %.4g\n\n",ld4);

	// ft_printf("ft %.20e\n\n",1.5);
	// ft_printf("float rounding ft %.2e\n\n",23.679);
	// ft_printf("float rounding ft %.2e\n\n",0.9999999);
	// ft_printf("float rounding ft %e\n\n",0.0573924);
	// ft_printf("float ft %e\n\n",f);
	// ft_printf("float ft %#.e\n\n",f);
	// ft_printf("float ft %.10e\n\n",f);
	// ft_printf("float ft %0 20.10e\n\n",f);
	// ft_printf("float ft % 30.10e\n\n",-f);
	// ft_printf("float ft % 20.10e\n\n",f);
	// ft_printf("float ft %# 20.10e\n\n",f);
	// ft_printf("float ft %#-20.10e\n\n",f);
	// ft_printf("float ft %#+20.10e\n\n",f);
	// printf("\n");
	// printf("ls %.20e\n\n",1.5);
	// printf("float rounding lc %.2e\n\n",23.679);
	// printf("float rounding lc %.2e\n\n",0.9999999);
	// printf("float rounding ls %e\n\n",0.0573924);
	// printf("float ls %e\n\n",f);
	// printf("float ls %#.e\n\n",f);
	// printf("float ls %.10e\n\n",f);
	// printf("float ls %0 20.10e\n\n",f);
	// printf("float ls % 30.10e\n\n",-f);
	// printf("float ls % 20.10e\n\n",f);
	// printf("float ls %# 20.10e\n\n",f);
	// printf("float ls %#-20.10e\n\n",f);
	// printf("float ls %#+20.10e\n\n",f);
	// printf("ls %#+20.10e\n\n",f);
	// printf("ls %#+20.10g\n\n",f);

	// printf("ls %f\n\n",f);
	// printf("ls %.10f\n\n",f);
	// printf("f %.0f\n\n",f);
	// printf("f %.f\n\n",f);

	// ft_printf("ft e %.e\n\n",ld3);
	// ft_printf("ft e %#.e\n\n",ld3);
	// ft_printf("ft e %#.5e\n\n",ld3);
	// ft_printf("ft e % 20.e\n\n",ld3);
	// ft_printf("ft e %020.0e\n\n",ld3);
	// ft_printf("ft e %+20.e\n\n",ld3);
	// printf("lf e %.e\n\n",ld3);
	// printf("lf e %#.e\n\n",ld3);
	// printf("lf e %#.5e\n\n",ld3);
	// printf("lf e % 20.e\n\n",ld3);
	// printf("lf e %020.0e\n\n",ld3);
	// printf("lf e %+20.e\n\n",ld3);


	/* char, string, % */
	// ft_printf("ft - %20s\n\n",NULL);
	// ft_printf("ft - %-5%%%%%%%%%%%%%.4s\n\n",s);
	// ft_printf("ft - %s\n\n",s);
	// ft_printf("ft - (%5.4s)\n\n",s);
	// ft_printf("ft - %-5.4s\n\n",s);
	// ft_printf("ft - %s\n\n",ss);
	// ft_printf("ft - %5s\n\n","lol");
	// ft_printf("ft - %s\n\n","");
	// ft_printf("ft - %%\n");
	// ft_printf("ft - %%\n");
	// ft_printf("ft - %5%\n");
	// ft_printf("ft - %-5%\n");
	// ft_printf("ft - %05%\n");
	// ft_printf("ft - %-05%\n");
	// ft_printf("ft - %05%%%%%%%%%\n");
	// printf("ls\n");

	// printf("ls - %20s\n\n",NULL);
	// printf("ls - %-6%%%%%%%%.4s\n\n","1234567890");
	// printf("ls - %s\n\n",s);
	// printf("ls - (%5.4s)\n\n",s);
	// printf("ls - %-5.4s\n\n",s);
	// printf("ls - %s\n\n",ss);
	// printf("ls - %5s\n\n","lol");
	// printf("ls - %s\n\n","");
	// printf("ls - %%\n");
	// printf("ls - %%\n");
	// printf("ls - %5%\n");
	// printf("ls - %-5%\n");
	// printf("ls - %05%\n");
	// printf("ls - %-.5%\n");
	// printf("ls - %05%%%%%%%%%\n");
	// printf("\x47 \n");
    // printf("\x45 \n");
    // printf("\x45 \n");
    // printf("\x4b \n");
    // printf("\x53");
	/* string options */
	// ft_printf("ft - %s\n\n",s);
	// ft_printf("ft - %10s\n\n",s);
	// ft_printf("ft - %-10s\n\n",s);
	// ft_printf("ft - %.2s\n\n",s);
	// ft_printf("ft - %10.2s\n\n",s);
	// ft_printf("ft - %-10.2s\n\n",s);
	// ft_printf("\n");
	// printf("ls - %s\n\n",s);
	// printf("ls - %10s\n\n",s);
	// printf("ls - %-10s\n\n",s);
	// printf("ls - %.2s\n\n",s);
	// printf("ls - %10.2s\n\n",s);
	// printf("ls - %-10.2s\n\n",s);

	/* char options */
	//ft_printf("ft - %c\n\n",i);
//	 ft_printf("ft - %10c\n\n",nonprint);
//	 ft_printf("ft - %10c\n\n",i);
//	 ft_printf("ft - %-9c\n\n",i);
//	ft_printf("ft - %lc\n\n",i);
//	 ft_printf("\n");
//	 printf("lc - %c\n\n",i);
//	 printf("lc - %10c\n\n",nonprint);
//	printf("lc - %10c\n\n",i);
//	 printf("lc - %-9c\n\n",i);
//	 printf("lc - %lc\n\n",i);










	/* binary */
	//int *c = &i;
	// printf("ftaaaaloll %n\n\n",c);
	// ft_printf("ft - %015x\n\n",255);
	// ft_printf("ft - %15.12x\n\n",255);
	// ft_printf("ft - %015x\n\n",255);
	// ft_printf("ft - %-.15x\n\n",255);
	// printf("ls%x\n\n",255);
	//printf("ls - %015x\n\n",444255);
	// printf("ls - %15.12x\n\n",255);
	// printf("ls - %015x\n\n",255);
	// printf("ls - %-.15x\n\n",255);

	/* apostrophe */
	// ft_printf("ft - %'i\n\n",123);
	// ft_printf("ft - %'i\n\n",1123);
	// ft_printf("ft - %'i\n\n",123123);
	// ft_printf("ft - %i\n\n",5123123);
	// ft_printf("ft - %'i\n\n",5123123);
	// ft_printf("ft - %15i\n\n",5123123);
	// ft_printf("ft - %'15i\n\n",5123123);
	// ft_printf("ft - %15.13i\n\n",5123123);
	// ft_printf("ft - %'15.13i\n\n",5123123);
	// ft_printf("ft - %15.i\n\n",5123123);
	// ft_printf("ft - %'15.i\n\n",5123123);
	// ft_printf("ft - %015.i\n\n",5123123);
	// ft_printf("ft - %0'15.i\n\n",5123123);
	// ft_printf("ft - %015i\n\n",5123123);
	// ft_printf("ft - %0'15i\n\n",5123123);
	// ft_printf("ft - %-15.i\n\n",5123123);
	// ft_printf("ft - %-'15.i\n\n",5123123);
	// printf("ls - %'i\n\n",123);
	// printf("ls - %'i\n\n",1123);
	// printf("ls - %'i\n\n",123123);
	// printf("ls - %i\n\n",5123123);
	// printf("ls - %'i\n\n",5123123);
	// printf("ls - %15i\n\n",5123123);
	// printf("ls - %'15i\n\n",5123123);
	// printf("ls - %15.13i\n\n",5123123);
	// printf("ls - %'15.13i\n\n",5123123);
	// printf("ls - %15.i\n\n",5123123);
	// printf("ls - %'15.i\n\n",5123123);
	// printf("ls - %015.i\n\n",5123123);
	// printf("ls - %0'15.i\n\n",5123123);
	// printf("ls - %015i\n\n",5123123);
	// printf("ls - %0'15i\n\n",5123123);
	// printf("ls - %-15.i\n\n",5123123);
	// printf("ls - %-'15.i\n\n",5123123);
	// ft_printf("\n");
	// ft_printf("ft - %'u\n\n",123);
	// ft_printf("ft - %'u\n\n",1123);
	// ft_printf("ft - %'u\n\n",123123);
	// ft_printf("ft - %u\n\n",5123123);
	// ft_printf("ft - %'u\n\n",5123123);
	// ft_printf("ft - %15u\n\n",5123123);
	// ft_printf("ft - %'15u\n\n",5123123);
	// ft_printf("ft - %15.13u\n\n",5123123);
	// ft_printf("ft - %'15.13u\n\n",5123123);
	// ft_printf("ft - %15.u\n\n",5123123);
	// ft_printf("ft - %'15.u\n\n",5123123);
	// ft_printf("ft - %015.u\n\n",5123123);
	// ft_printf("ft - %0'15.u\n\n",5123123);
	// ft_printf("ft - %015u\n\n",5123123);
	// ft_printf("ft - %0'15u\n\n",5123123);
	// ft_printf("ft - %-15.u\n\n",5123123);
	// ft_printf("ft - %-'15.u\n\n",5123123);
	// ft_printf("ft - %f\n\n",5123123.555666);
	// ft_printf("ft - %'f\n\n",5123123.555666);

	// printf("\033[1;31m");
	// printf("ls - %'u\n\n",123);
	// printf("ls - %'u\n\n",1123);
	// printf("ls - %'u\n\n",123123);
	// printf("ls - %u\n\n",5123123);
	// printf("ls - %'u\n\n",5123123);
	// printf("ls - %15u\n\n",5123123);
	// printf("ls - %'15u\n\n",5123123);
	// printf("ls - %15.13u\n\n",5123123);
	// printf("ls - %'15.13u\n\n",5123123);
	// printf("ls - %15.u\n\n",5123123);
	// printf("ls - %'15.u\n\n",5123123);
	// printf("ls - %015.u\n\n",5123123);
	// printf("ls - %0'15.u\n\n",5123123);
	// printf("ls - %015u\n\n",5123123);
	// printf("ls - %0'15u\n\n",5123123);
	// printf("ls - %-15.u\n\n",5123123);
	// printf("ls - %-'15.u\n\n", ,51112371);
	// printf("ls - %f\n\n",5123123.555666);
	// printf("ls - %'f\n\n",5123123.555666);
	/* int lengths */
	// ft_printf("%i%i%li%lli\n",i, j, l, ll);
	// printf("\n");
	// ft_printf("%u%lu%llu\n",u, ul, ull);
	// printf("\n");
	// ft_printf("%o%lo%llo\n",u, ul, ull);
	// printf("\n");
	// ft_printf("%x%lx%llx\n",u, ul, ull);
	// printf("\n");
	// ft_printf("%X%lX%llX\n",u, ul, ull);
	// printf("\n");
	/* lengths out of range */
	// ft_printf("ft %hhi, %hhi, %hi, %hi\n\n",(char)-129, (char)128, (short)32768, (short)-32769);
	// printf("lc %hhi, %hhi, %hi, %hi\n\n",(char)-129, (char)128, (short)32768, (short)-32769);

	/* signed int options */
	// ft_printf("ft %d\n\n",5555);
	// ft_printf("ft %9d\n\n",5555);
	// ft_printf("ft %09i\n\n",i);
	// ft_printf("ft %-9i\n\n",i);
	// ft_printf("ft %-09i\n\n",i); // 0 is ignored
	// ft_printf("ft %+i\n\n",i);
	// ft_printf("ft % i\n\n",i);
	// ft_printf("ft % +i\n\n",i); // ' ' is ignored
	// ft_printf("ft % 9i\n\n",i);
	// ft_printf("ft % -9i\n\n",i);
	// ft_printf("ft % 09i\n\n",i);
	// ft_printf("ft %.*i\n\n",prec, i);
	// ft_printf("ft %37.*i\n\n",prec, i);
	 //printf("ls {%+-3.1i\n\n",k);
	// ft_printf("ft %-39.*i\n\n",prec, i);
	// ft_printf("ft %-039.*i\n\n",prec, i); // 0 is ignored
	// ft_printf("ft %+.*i\n\n",prec, i);
	// ft_printf("ft % .*i\n\n",prec, i);
	// ft_printf("ft % +.*i\n\n",prec, i); // ' ' is ignored
	// ft_printf("ft % 39.*i\n\n",prec, i);
	// ft_printf("ft % -39.*i\n\n",prec, i);
	// ft_printf("ft % 039.*i\n\n",prec, i);

	/* zero precision */
	// ft_printf("ft %.0i\n\n",0);
	// ft_printf("ft %.0o\n\n",5);
	// ft_printf("ft %.0o\n\n",0);
	// ft_printf("ft %.0x\n\n",0);
	// ft_printf("ft %x\n\n",0);

	/* octal options */
	//  int r = 0;
	//  ft_printf("%2i ft %o\n\n",++r, u);
	//  ft_printf("%2i ft %#o\n\n",++r, u);
	//  ft_printf("%2i ft %9o\n\n",++r, u);
	//  ft_printf("%2i ft %#9o\n\n",++r, u);
	//  ft_printf("%2i ft %09o\n\n",++r, u);
	//  ft_printf("%2i ft %#09o\n\n",++r, u);
	//  ft_printf("%2i ft %-9o\n\n",++r, u);
	//  ft_printf("%2i ft %#-9o\n\n",++r, u);
	//  ft_printf("%2i ft %.o\n\n",++r, u);
	//  ft_printf("%2i ft %#.o\n\n",++r, u);
	// ft_printf("%2i ft %.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %#.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %9.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %#9.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %09.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %#09.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %-9.*o\n\n",++r, prec, u);
	// ft_printf("%2i ft %#-9.*o\n\n",++r, prec, u);
	// ft_printf("\n");

	/* zero precision */
	// ft_printf("ft %.0i\n\n",0);
	// ft_printf("ft %.0o\n\n",5);
	// ft_printf("ft %.0o\n\n",0);
	// ft_printf("ft %.0x\n\n",0);
	// ft_printf("ft %x\n\n",0);
	// ft_printf("ft %x\n\n",0);

	// printf("lc %.0i\n\n",0);
	// printf("lc %.0o\n\n",5);
	// printf("lc %.0o\n\n",0);
	// printf("lc %.0x\n\n",0);
	// printf("lc %x\n\n",0);
	// printf("lc %x\n\n",0);

	//  r = 0;
	//  printf("%2i lc %o\n\n",++r, u);
	//  printf("%2i lc %#o\n\n",++r, u);
	//  printf("%2i lc %9o\n\n",++r, u);
	// printf("%2i lc %#9o\n\n",++r, u);
	// printf("%2i lc %09o\n\n",++r, u);
	//  printf("%2i lc %#09o\n\n",++r, u);
	//  printf("%2i lc %-9o\n\n",++r, u);
	//  printf("%2i lc %#-9o\n\n",++r, u);
	//  printf("%2i lc %.o\n\n",++r, u);
	//  printf("%2i lc %#.o\n\n",++r, u);
	//  printf("%2i lc %.*o\n\n",++r, prec, u);
	//  printf("%2i lc %#.*o\n\n",++r, prec, u);
	//  printf("%2i lc %9.*o\n\n",++r, prec, u);
	//  printf("%2i lc %#9.*o\n\n",++r, prec, u);
	//  printf("%2i lc %09.*o\n\n",++r, prec, u);
	//  printf("%2i lc %#09.*o\n\n",++r, prec, u);
	//  printf("%2i lc %-9.*o\n\n",++r, prec, u);
	//  printf("%2i lc %#-9.*o\n\n",++r, prec, u);



	// printf("\n");
	// ft_printf("ft %i\n\n",j);
	// ft_printf("ft %0i\n\n",j);
	// ft_printf("ft %9i\n\n",j);
	// ft_printf("ft %09i\n\n",j);
	// ft_printf("ft %-9i\n\n",j);
	// ft_printf("\n");
		// ft_printf("%+i\n\n",j);
		// ft_printf("% i\n\n",j);
		// ft_printf("%.8i\n\n",j);
		// ft_printf("%7.8i\n\n",j);
	// printf("lc %i\n\n",j);
	// printf("lc %0i\n\n",j);
	// printf("lc %9i\n\n",j);
	// printf("lc %09i\n\n",j);
	// printf("lc %-9i\n\n",j);
		// printf("%+i\n\n",j);
		// printf("% i\n\n",j);
		// printf("%.8i\n\n",j);
		// printf("%7.8i\n\n",j);

	// printf("%lu\n\n",125L);


	/* float options */
	// ft_printf("ft - %.20Lf\n\n",ld);
	// ft_printf("ft - %#20f\n\n",d);
	// ft_printf("ft - %015lf\n\n",d);
	// ft_printf("ft - %15f\n\n",d);
	// ft_printf("ft - %0lf\n\n",d);
	// ft_printf("ft - %-15f\n\n",d);
	// ft_printf("ft - %+f\n\n",d);
	// ft_printf("ft - % f\n\n",d);
	// ft_printf("ft - %7.12f\n\n",d);
	// ft_printf("ft - %30.12f\n\n",d);
	// ft_printf("ft - %030.12f\n\n",d);
	// ft_printf("ft - %-30.12f\n\n",d);

	// printf("ls - %.20Lf\n\n",ld);
	// printf("ls - %#20f\n\n",d);
	// printf("ls - %015lf\n\n",d);
	// printf("ls - %15f\n\n",d);
	// printf("ls - %0lf\n\n",d);
	// printf("ls - %-15f\n\n",d);
	// printf("ls - %+f\n\n",d);
	// printf("ls - % f\n\n",d);
	// printf("ls - %7.12f\n\n",d);
	// printf("ls - %30.12f\n\n",d);
	// printf("ls - %030.12f\n\n",d);
	// printf("ls - %-30.12f\n\n",d);

	/* exp options */
	// printf("%e\n\n",d);
	// printf("%.10e\n\n",d);


	// ft_printf("%*.*c\n\n",33, 44, i);
	// printf("%*.*i\n\n",10, 5, i);
	// printf("%1$*3$.*1$i, %2$*1$i, %3$*2$i\n\n",10, 5, i);
	// ft_printf("%*.*i\n\n",10, 5, i);

	// printf("%p\n\n",&i);
	// printf("\n");
	// printf("%s\n\n",s);
	// printf("%i\n\n",i);
	// printf("%o\n\n",i);
	// printf("%u\n\n",i);
	// printf("%x\n\n",i);
 	// printf("%#x\n\n",i);
 	// printf("%##x\n\n",i);
	// printf("%X\n\n",i);
	// printf("%f\n\n",d);
	// printf("\n");

	// printf("--specified precision--\n");
	// printf("%.4s\n\n",s);
	// printf("%.4i\n\n",i);
	// printf("%.4o\n\n",i);
	// printf("%.4u\n\n",i);
	// printf("%.4x\n\n",i);
	// printf("%.4X\n\n",i);
	// printf("%.4f\n\n",d);
	// printf("\n");

	// printf("--unspecified precision--\n");
	// printf("%.s\n\n",s);

//  ft_printf("%d\n",2147483648);                //  -> "-2147483648"
//  ft_printf("%d\n",-2147483648);               //  -> "-2147483648"
//  ft_printf("%d\n",-2147483649);               //  -> "2147483647"
//  ft_printf("% d\n",42);                       //  -> " 42"
//  ft_printf("% d\n",-42);                      //  -> "-42"
//  ft_printf("%+d\n",42);                       //  -> "+42"
//  ft_printf("%+d\n",-42);                      //  -> "-42"
//  ft_printf("%+d\n",0);                        //  -> "+0"
//  //printf("%+d\n",4242424242424242424242);   //  -> "-1"
//  ft_printf("% +d\n",42);                      //  -> "+42"
//  ft_printf("% +d\n",-42);                     //  -> "-42"
//  ft_printf("%+ d\n",42);                      //  -> "+42"
//  ft_printf("%+ d\n",-42);                     //  -> "-42"
//  ft_printf("%  +d\n",42);                     //  -> "+42"
//  ft_printf("%  +d\n",-42);                    //  -> "-42"
//  ft_printf("%+  d\n",42);                     //  -> "+42"
//  ft_printf("%+  d\n",-42);                    //  -> "-42"
//  ft_printf("% ++d\n",42);                     //  -> "+42"
//  ft_printf("% ++d\n",-42);                    //  -> "-42"
//  ft_printf("%++ d\n",42);                     //  -> "+42"
//  ft_printf("%++ d\n",-42);                    //  -> "-42"
//  ft_printf("%0d\n",-42);                      //  -> "-42"
//  ft_printf("%00d\n",-42);                     //  -> "-42"
//  ft_printf("%5d\n",42);                       //  -> "   42"
//  ft_printf("%05d\n",42);                      //  -> "00042"
//  ft_printf("%0+5d\n",42);                     //  -> "+0042"
//  ft_printf("%5d\n",-42);                      //  -> "  -42"
//  ft_printf("%05d\n",-42);                     //  -> "-0042"
//  ft_printf("%0+5d\n",-42);                    //  -> "-0042"
//  ft_printf("%-5d\n",42);                      //  -> "42   "
//  ft_printf("%-05d\n",42);                     //  -> "42   "
//  ft_printf("%-5d\n",-42);                     //  -> "-42  "
//  ft_printf("%-05d\n",-42);                    //  -> "-42  "
//  ft_printf("%hd\n",32767);                    //  -> "32767"
//  //printf("%hd\n",−32768);                   //-> "0"
//  //printf("%hd\n",32768);                    //  -> "-32768"
//  //printf("%hd\n",−32769);                   //-> "0"
//  ft_printf("%hhd\n",127);                     //  -> "127"
//  ft_printf("%hhd\n",128);                     //  -> "-128"
//  ft_printf("%hhd\n",-128);                    //  -> "-128"
//  ft_printf("%hhd\n",-129);                    //  -> "127"
//  ft_printf("%ld\n",2147483647);               //  -> "2147483647"
//  ft_printf("%ld\n",-2147483648);              //  -> "-2147483648"
//  ft_printf("%ld\n",2147483648);               //  -> "2147483648"
//  ft_printf("%ld\n",-2147483649);              //  -> "-2147483649"
//  ft_printf("%lld\n",9223372036854775807);     //  -> "9223372036854775807"
//  //printf("%lld\n",-9223372036854775808);    //  -> "-9223372036854775808"
//  ft_printf("%d\n",1);                         //  -> "1"
//  ft_printf("%d %d\n",1, -2);                  //  -> "1 -2"
//  ft_printf("%d %d %d\n",1, -2, 33);           //  -> "1 -2 33"
//  ft_printf("%d %d %d %d\n",1, -2, 33, 42);    //  -> "1 -2 33 42"
//  ft_printf("%d %d %d %d gg!\n",1, -2, 33, 42, 0);// -> "1 -2 33 42 gg!"
//  ft_printf("%4.15d\n",42);                    //  -> "000000000000042"
//  ft_printf("%.2d\n",4242);                    //  -> "4242"
//  ft_printf("%.10d\n",4242);                   //  -> "0000004242"
//  ft_printf("%10.5d\n",4242);                  //  -> "     04242"
//  ft_printf("%-10.5d\n",4242);                 //  -> "04242     "
//  ft_printf("% 10.5d\n",4242);                 //  -> "     04242"
//  ft_printf("%+10.5d\n",4242);                 //  -> "    +04242"
//  ft_printf("%-+10.5d\n",4242);                //  -> "+04242    "
//  ft_printf("%03.2d\n",0);                     //  -> " 00"
//  ft_printf("%03.2d\n",1);                     //  -> " 01"
//  ft_printf("%03.2d\n",-1);                    //  -> "-01"
//  ft_printf("%u\n",0);                         //  -> "0"
//  ft_printf("%u\n",1);                         //  -> "1"
//  ft_printf("%u\n",-1);                        //  -> "4294967295"
//  ft_printf("%u\n",4294967295);                //  -> "4294967295"
//  ft_printf("%u\n",4294967296);                //  -> "0"
//  ft_printf("%5u\n",4294967295);               //  -> "4294967295"
//  ft_printf("%15u\n",4294967295);              //  -> "     4294967295"
//  ft_printf("%-15u\n",4294967295);             //  -> "4294967295     "
//  ft_printf("%015u\n",4294967295);             //  -> "000004294967295"
//  ft_printf("% u\n",4294967295);               //  -> "4294967295"
//  ft_printf("%+u\n",4294967295);               //  -> "4294967295"
//  ft_printf("%lu\n",4294967295);               //  -> "4294967295"
//  ft_printf("%lu\n",4294967296);               //  -> "4294967296"
//  ft_printf("%lu\n",-42);                      //  -> "18446744073709551574"
//  ft_printf("%llu\n",4999999999);              //  -> "4999999999"
//
}		
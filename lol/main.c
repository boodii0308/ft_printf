/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:48:13 by tebatsai          #+#    #+#             */
/*   Updated: 2019/09/07 00:27:11 by tebatsai         ###   ########.fr       */
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
	unsigned long	ul;
	long long ll;
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

	i = 75;
	u = 111;
	prec = 5;
	nonprint = 15;
	j = -75;
	k = 500111222;
	i = 75;
	l = -5123123123;
	ul = 5123123123;
	ll = -9223372036854775807;
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

	// ft_printf("ft {%*d}\n", -5, 42);
	// printf("lc {%*d}\n", -5, 42);
	// ft_printf("ft {%+-.*d}\n",16, 42);
	// printf("lc {%+-.*d}\n",16, 42);
	// ft_printf("ft {%15.*d}\n", 10, 42);
	// printf("lc {%15.*d}\n",10, 42);

	// ft_printf("ft {%13.*d}\n", -5, 77777);
	// printf("lc {%13.*d}\n", -5, 77777);
	// ft_printf("ft {%'*i}\n",16, 74655132);
	// printf("lc {%'*i}\n",16, 74655132);
	// ft_printf("ft {%0d}\n", k);
	// printf("lc {%0d}\n", k);

	// ft_printf("ft {%-*Lf}\n", -5, ll);
	// printf("lc {%-*Ld}\n", -5, ll);
	// ft_printf("ft {%+d -%13f}\n",16, 42);
	// printf("lc {%+d -%13f}\n",16, 42);
	// ft_printf("ft {%.*lfdd %-3i}\n", 10, l, 42);
	// printf("ls {%.*lfdd %-3i}\n", 10, l, 42);
	// ft_printf("%.110Lf\n", ld1);
	// printf("%.110Lf\n", ld1);
	// ft_printf("ft %10x\n", 42);
	// printf("lc %10x\n", 42);
	// ft_printf("ft %p\n", NULL);
	// ft_printf("ft %.p\n", NULL);
	// ft_printf("ft %.0p\n", NULL);
	// ft_printf("ft %.x\n", 0);
	// ft_printf("ft %.0p\n", NULL);
	// printf("lc %p\n", NULL);
	// printf("lc %.p\n", NULL);
	// printf("lc %.x\n", 0);
	// printf("lc %.0p\n", NULL);


	/* asterisk */
	// ft_printf("ft %.*f\n", 3, ld3);
	// ft_printf("ft %.*f\n", -10, ld3); // negative precision
	// ft_printf("ft %.*i\n", -10, i);
	// printf("ORIG>\t[%+ld]\n", 4000000000);
	// printf("lc %.*f\n", 3, ld3);
	// printf("lc %.*f\n", -100, ld3);
	// printf("lc %.*i\n", -10, i);

	/* %n */
	// printf("n %i\n", n);
	// printf("123456788\n%5n", &n);
	// printf("n %i\n", n);

	/* feg */
	// ft_printf("ft %f\n", DBL_NAN);

	// ft_printf("ft %g\n", (double)42);
	// ft_printf("ft %G\n", (double)42);
	// printf("lc %g\n", (double)42);
	// printf("lc %G\n", (double)42);
	// ft_printf("f ft %f\n", ld3);
	// ft_printf("f ft %f\n", ld4);
	// ft_printf("e ft %e\n", ld3);
	// ft_printf("e ft %e\n", ld4);
	// ft_printf("g ft %.4g\n", ld3);
	// ft_printf("g ft %.4g\n", ld4);
	// ft_printf("\n");
	// printf("f ls %f\n", ld3);
	// printf("f ls %f\n", ld4);
	// printf("e ls %e\n", ld3);
	// printf("e ls %e\n", ld4);
	// printf("g ls %.4g\n", ld3);
	// printf("g ls %.4g\n", ld4);

	ft_printf("ft %.20e\n", 1.5);
	ft_printf("float rounding ft %.2e\n", 23.679);
	ft_printf("float rounding ft %.2e\n", 0.9999999);
	ft_printf("float rounding ft %e\n", 0.0573924);
	ft_printf("float ft %e\n", f);
	ft_printf("float ft %#.e\n", f);
	ft_printf("float ft %.10e\n", f);
	ft_printf("float ft %0 20.10e\n", f);
	ft_printf("float ft % 30.10e\n", -f);
	ft_printf("float ft % 20.10e\n", f);
	ft_printf("float ft %# 20.10e\n", f);
	ft_printf("float ft %#-20.10e\n", f);
	ft_printf("float ft %#+20.10e\n", f);
	printf("\n");
	printf("ls %.20e\n", 1.5);
	printf("float rounding lc %.2e\n", 23.679);
	printf("float rounding lc %.2e\n", 0.9999999);
	printf("float rounding ls %e\n", 0.0573924);
	printf("float ls %e\n", f);
	printf("float ls %#.e\n", f);
	printf("float ls %.10e\n", f);
	printf("float ls %0 20.10e\n", f);
	printf("float ls % 30.10e\n", -f);
	printf("float ls % 20.10e\n", f);
	printf("float ls %# 20.10e\n", f);
	printf("float ls %#-20.10e\n", f);
	printf("float ls %#+20.10e\n", f);
	// printf("ls %#+20.10e\n", f);
	// printf("ls %#+20.10g\n", f);

	// printf("ls %f\n", f);
	// printf("ls %.10f\n", f);
	// printf("f %.0f\n", f);
	// printf("f %.f\n", f);

	// ft_printf("ft e %.Le\n", ld3);
	// ft_printf("ft e %#.Le\n", ld3);
	// ft_printf("ft e %#.5Le\n", ld3);
	// ft_printf("ft e % 20.Le\n", ld3);
	// ft_printf("ft e %020.0Le\n", ld3);
	// ft_printf("ft e %+20.Le\n", ld3);
	// printf("lf e %.Le\n", ld3);
	// printf("lf e %#.Le\n", ld3);
	// printf("lf e %#.5Le\n", ld3);
	// printf("lf e % 20.Le\n", ld3);
	// printf("lf e %020.0Le\n", ld3);
	// printf("lf e %+20.Le\n", ld3);


	/* char, string, % */
	//ft_printf("ft %20s\n", NULL);
	//printf("ls %20s\n", NULL);
	// ft_printf("%s\n", s);
	//ft_printf("ft(%5.4s)\n", s);
	//printf("ls(%5.4s)\n",s);
	//ft_printf("ft%-5.4s\n", s);
//	printf("ls%-25%%%%.4s\n", s);
	//ft_printf("ft%s\n", ss);
	//printf("ls%s\n", ss);
	// ft_printf("%5c\n", i);
	// printf("%5c\n", i);
	// ft_printf("%c\n", 0);
	// ft_printf("ft %%\n");
//	ft_printf("ft %%\n");
//	printf("lc %%\n");
//	ft_printf("ft %5%\n");
//	printf("lc %5%\n");
//	ft_printf("ft %-5%\n");
//	printf("lc %-5%\n");
//	ft_printf("ft %05%\n");
//	printf("lc %05%%%%%%%%%\n");
//	ft_printf("ft %-05%\n");
//	printf("lc %-05%\n");
	//ft_printf("ft\n");
	//printf("ls\n");










	/* binary */
	//int *c = &i;
	// printf("ftaaaaloll %n\n", c);
	// ft_printf("ft - %015x\n", 255);
	// ft_printf("ft - %15.12x\n", 255);
	// ft_printf("ft - %015x\n", 255);
	// ft_printf("ft - %-.15x\n", 255);
	// printf("ls%x\n", 255);
	//printf("ls - %015x\n", 444255);
	// printf("ls - %15.12x\n", 255);
	// printf("ls - %015x\n", 255);
	// printf("ls - %-.15x\n", 255);

	/* apostrophe */
	// ft_printf("ft - %'i\n", 123);
	// ft_printf("ft - %'i\n", 1123);
	// ft_printf("ft - %'i\n", 123123);
	// ft_printf("ft - %i\n", 5123123);
	// ft_printf("ft - %'i\n", 5123123);
	// ft_printf("ft - %15i\n", 5123123);
	// ft_printf("ft - %'15i\n", 5123123);
	// ft_printf("ft - %15.13i\n", 5123123);
	// ft_printf("ft - %'15.13i\n", 5123123);
	// ft_printf("ft - %15.i\n", 5123123);
	// ft_printf("ft - %'15.i\n", 5123123);
	// ft_printf("ft - %015.i\n", 5123123);
	// ft_printf("ft - %0'15.i\n", 5123123);
	// ft_printf("ft - %015i\n", 5123123);
	// ft_printf("ft - %0'15i\n", 5123123);
	// ft_printf("ft - %-15.i\n", 5123123);
	// ft_printf("ft - %-'15.i\n", 5123123);
	// printf("ls - %'i\n", 123);
	// printf("ls - %'i\n", 1123);
	// printf("ls - %'i\n", 123123);
	// printf("ls - %i\n", 5123123);
	// printf("ls - %'i\n", 5123123);
	// printf("ls - %15i\n", 5123123);
	// printf("ls - %'15i\n", 5123123);
	// printf("ls - %15.13i\n", 5123123);
	// printf("ls - %'15.13i\n", 5123123);
	// printf("ls - %15.i\n", 5123123);
	// printf("ls - %'15.i\n", 5123123);
	// printf("ls - %015.i\n", 5123123);
	// printf("ls - %0'15.i\n", 5123123);
	// printf("ls - %015i\n", 5123123);
	// printf("ls - %0'15i\n", 5123123);
	// printf("ls - %-15.i\n", 5123123);
	// printf("ls - %-'15.i\n", 5123123);
	// ft_printf("\n");
	// ft_printf("ft - %'u\n", 123);
	// ft_printf("ft - %'u\n", 1123);
	// ft_printf("ft - %'u\n", 123123);
	// ft_printf("ft - %u\n", 5123123);
	// ft_printf("ft - %'u\n", 5123123);
	// ft_printf("ft - %15u\n", 5123123);
	// ft_printf("ft - %'15u\n", 5123123);
	// ft_printf("ft - %15.13u\n", 5123123);
	// ft_printf("ft - %'15.13u\n", 5123123);
	// ft_printf("ft - %15.u\n", 5123123);
	// ft_printf("ft - %'15.u\n", 5123123);
	// ft_printf("ft - %015.u\n", 5123123);
	// ft_printf("ft - %0'15.u\n", 5123123);
	// ft_printf("ft - %015u\n", 5123123);
	// ft_printf("ft - %0'15u\n", 5123123);
	// ft_printf("ft - %-15.u\n", 5123123);
	// ft_printf("ft - %-'15.u\n", 5123123);
	// ft_printf("ft - %f\n", 5123123.555666);
	// ft_printf("ft - %'f\n", 5123123.555666);

	// printf("\033[1;31m");
	// printf("ls - %'u\n", 123);
	// printf("ls - %'u\n", 1123);
	// printf("ls - %'u\n", 123123);
	// printf("ls - %u\n", 5123123);
	// printf("ls - %'u\n", 5123123);
	// printf("ls - %15u\n", 5123123);
	// printf("ls - %'15u\n", 5123123);
	// printf("ls - %15.13u\n", 5123123);
	// printf("ls - %'15.13u\n", 5123123);
	// printf("ls - %15.u\n", 5123123);
	// printf("ls - %'15.u\n", 5123123);
	// printf("ls - %015.u\n", 5123123);
	// printf("ls - %0'15.u\n", 5123123);
	// printf("ls - %015u\n", 5123123);
	// printf("ls - %0'15u\n", 5123123);
	// printf("ls - %-15.u\n", 5123123);
	// printf("ls - %-'15.u\n",51112371);
	// printf("ls - %f\n", 5123123.555666);
	// printf("ls - %'f\n", 5123123.555666);
	/* int lengths */
	// ft_printf("%i%i%li%lli", i, j, l, ll);
	// printf("\n");
	// ft_printf("%u%lu%llu", u, ul, ull);
	// printf("\n");
	// ft_printf("%o%lo%llo", u, ul, ull);
	// printf("\n");
	// ft_printf("%x%lx%llx", u, ul, ull);
	// printf("\n");
	// ft_printf("%X%lX%llX", u, ul, ull);
	// printf("\n");
	/* lengths out of range */
	// ft_printf("ft %hhi, %hhi, %hi, %hi\n", (char)-129, (char)128, (short)32768, (short)-32769);
	// printf("lc %hhi, %hhi, %hi, %hi\n", (char)-129, (char)128, (short)32768, (short)-32769);

	/* signed int options */
	// ft_printf("ft %d\n", 5555);
	// ft_printf("ft %9d\n", 5555);
	// ft_printf("ft %09i\n", i);
	// ft_printf("ft %-9i\n", i);
	// ft_printf("ft %-09i\n", i); // 0 is ignored
	// ft_printf("ft %+i\n", i);
	// ft_printf("ft % i\n", i);
	// ft_printf("ft % +i\n", i); // ' ' is ignored
	// ft_printf("ft % 9i\n", i);
	// ft_printf("ft % -9i\n", i);
	// ft_printf("ft % 09i\n", i);
	// ft_printf("ft %.*i\n", prec, i);
	// ft_printf("ft %37.*i\n", prec, i);
	 //printf("ls {%+-3.1i}\n", k);
	// ft_printf("ft %-39.*i\n", prec, i);
	// ft_printf("ft %-039.*i\n", prec, i); // 0 is ignored
	// ft_printf("ft %+.*i\n", prec, i);
	// ft_printf("ft % .*i\n", prec, i);
	// ft_printf("ft % +.*i\n", prec, i); // ' ' is ignored
	// ft_printf("ft % 39.*i\n", prec, i);
	// ft_printf("ft % -39.*i\n", prec, i);
	// ft_printf("ft % 039.*i\n", prec, i);

	/* zero precision */
	// ft_printf("ft %.0i\n", 0);
	// ft_printf("ft %.0o\n", 5);
	// ft_printf("ft %.0o\n", 0);
	// ft_printf("ft %.0x\n", 0);
	// ft_printf("ft %x\n", 0);

	/* octal options */
	//  int r = 0;
	//  ft_printf("%2i ft %o\n", ++r, u);
	//  ft_printf("%2i ft %#o\n", ++r, u);
	//  ft_printf("%2i ft %9o\n", ++r, u);
	//  ft_printf("%2i ft %#9o\n", ++r, u);
	//  ft_printf("%2i ft %09o\n", ++r, u);
	//  ft_printf("%2i ft %#09o\n", ++r, u);
	//  ft_printf("%2i ft %-9o\n", ++r, u);
	//  ft_printf("%2i ft %#-9o\n", ++r, u);
	//  ft_printf("%2i ft %.o\n", ++r, u);
	//  ft_printf("%2i ft %#.o\n", ++r, u);
	// ft_printf("%2i ft %.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %9.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#9.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %09.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#09.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %-9.*o\n", ++r, prec, u);
	// ft_printf("%2i ft %#-9.*o\n", ++r, prec, u);
	// ft_printf("\n");

	/* zero precision */
	// ft_printf("ft %.0i\n", 0);
	// ft_printf("ft %.0o\n", 5);
	// ft_printf("ft %.0o\n", 0);
	// ft_printf("ft %.0x\n", 0);
	// ft_printf("ft %x\n", 0);
	// ft_printf("ft %x\n", 0);

	// printf("lc %.0i\n", 0);
	// printf("lc %.0o\n", 5);
	// printf("lc %.0o\n", 0);
	// printf("lc %.0x\n", 0);
	// printf("lc %x\n", 0);
	// printf("lc %x\n", 0);

	//  r = 0;
	//  printf("%2i lc %o\n", ++r, u);
	//  printf("%2i lc %#o\n", ++r, u);
	//  printf("%2i lc %9o\n", ++r, u);
	// printf("%2i lc %#9o\n", ++r, u);
	// printf("%2i lc %09o\n", ++r, u);
	//  printf("%2i lc %#09o\n", ++r, u);
	//  printf("%2i lc %-9o\n", ++r, u);
	//  printf("%2i lc %#-9o\n", ++r, u);
	//  printf("%2i lc %.o\n", ++r, u);
	//  printf("%2i lc %#.o\n", ++r, u);
	//  printf("%2i lc %.*o\n", ++r, prec, u);
	//  printf("%2i lc %#.*o\n", ++r, prec, u);
	//  printf("%2i lc %9.*o\n", ++r, prec, u);
	//  printf("%2i lc %#9.*o\n", ++r, prec, u);
	//  printf("%2i lc %09.*o\n", ++r, prec, u);
	//  printf("%2i lc %#09.*o\n", ++r, prec, u);
	//  printf("%2i lc %-9.*o\n", ++r, prec, u);
	//  printf("%2i lc %#-9.*o\n", ++r, prec, u);

	// /* pointers */
	// ft_printf("ft %p\n", NULL);
	// ft_printf("ft %p\n", &i);
	// ft_printf("ft %20p\n", &i);
	// ft_printf("ft %-20p\n", &i);
	// printf("lc %p\n", NULL);
	// printf("lc %p\n", &i);
	// printf("lc %20p\n", &i);
	// printf("lc %-20p\n", &i);




	// printf("\n");
	// ft_printf("ft %i\n", j);
	// ft_printf("ft %0i\n", j);
	// ft_printf("ft %9i\n", j);
	// ft_printf("ft %09i\n", j);
	// ft_printf("ft %-9i\n", j);
	// ft_printf("\n");
		// ft_printf("%+i\n", j);
		// ft_printf("% i\n", j);
		// ft_printf("%.8i\n", j);
		// ft_printf("%7.8i\n", j);
	// printf("lc %i\n", j);
	// printf("lc %0i\n", j);
	// printf("lc %9i\n", j);
	// printf("lc %09i\n", j);
	// printf("lc %-9i\n", j);
		// printf("%+i\n", j);
		// printf("% i\n", j);
		// printf("%.8i\n", j);
		// printf("%7.8i\n", j);

	// printf("%lu\n", 125L);

	/* string options */
	// ft_printf("%s\n", s);
	// ft_printf("%10s\n", s);
	// ft_printf("%-10s\n", s);
	// ft_printf("%.2s\n", s);
	// ft_printf("%10.2s\n", s);
	// ft_printf("%-10.2s\n", s);
	// ft_printf("\n");
	// printf("%s\n", s);
	// printf("%10s\n", s);
	// printf("%-10s\n", s);
	// printf("%.2s\n", s);
	// printf("%10.2s\n", s);
	// printf("%-10.2s\n", s);

	/* char options */
	//ft_printf("ft - %c\n", i);
//	 ft_printf("ft - %10c\n", nonprint);
//	 ft_printf("ft - %10c\n", i);
//	 ft_printf("ft - %-9c\n", i);
//	ft_printf("ft - %lc\n", i);
//	 ft_printf("\n");
//	 printf("lc - %c\n", i);
//	 printf("lc - %10c\n", nonprint);
//	printf("lc - %10c\n", i);
//	 printf("lc - %-9c\n", i);
//	 printf("lc - %lc\n", i);

	/* float options */
	// ft_printf("ft - %.20Lf\n", ld);
	// ft_printf("ft - %#20f\n", d);
	// ft_printf("ft - %015lf\n", d);
	// ft_printf("ft - %15f\n", d);
	// ft_printf("ft - %0lf\n", d);
	// ft_printf("ft - %-15f\n", d);
	// ft_printf("ft - %+f\n", d);
	// ft_printf("ft - % f\n", d);
	// ft_printf("ft - %7.12f\n", d);
	// ft_printf("ft - %30.12f\n", d);
	// ft_printf("ft - %030.12f\n", d);
	// ft_printf("ft - %-30.12f\n", d);

	// printf("ls - %.20Lf\n", ld);
	// printf("ls - %#20f\n", d);
	// printf("ls - %015lf\n", d);
	// printf("ls - %15f\n", d);
	// printf("ls - %0lf\n", d);
	// printf("ls - %-15f\n", d);
	// printf("ls - %+f\n", d);
	// printf("ls - % f\n", d);
	// printf("ls - %7.12f\n", d);
	// printf("ls - %30.12f\n", d);
	// printf("ls - %030.12f\n", d);
	// printf("ls - %-30.12f\n", d);

	/* exp options */
	// printf("%e\n", d);
	// printf("%.10e\n", d);


	// ft_printf("%*.*c\n", 33, 44, i);
	// printf("%*.*i\n", 10, 5, i);
	// printf("%1$*3$.*1$i, %2$*1$i, %3$*2$i\n", 10, 5, i);
	// ft_printf("%*.*i\n", 10, 5, i);

	// printf("%p\n", &i);
	// printf("\n");
	// printf("%s\n", s);
	// printf("%i\n", i);
	// printf("%o\n", i);
	// printf("%u\n", i);
	// printf("%x\n", i);
 	// printf("%#x\n", i);
 	// printf("%##x\n", i);
	// printf("%X\n", i);
	// printf("%f\n", d);
	// printf("\n");

	// printf("--specified precision--\n");
	// printf("%.4s\n", s);
	// printf("%.4i\n", i);
	// printf("%.4o\n", i);
	// printf("%.4u\n", i);
	// printf("%.4x\n", i);
	// printf("%.4X\n", i);
	// printf("%.4f\n", d);
	// printf("\n");

	// printf("--unspecified precision--\n");
	// printf("%.s\n", s);
	// printf("%.i\n", i);
	// printf("%.o\n", i);
	// printf("%.u\n", i);
	// printf("%.x\n", i);
	// printf("%.X\n", i);
	// printf("%.f\n", d);
	// printf("%.0f\n", d);

	// printf("--positive padding--\n");
	// printf("%14s\n", s);
	// printf("%14i\n", i);
	// printf("%0i\n", i);
	// printf("%i\n", i);
	// printf("%14o\n", i);
	// printf("%14u\n", i);
	// printf("%14x\n", i);
	// printf("%14X\n", i);
	// printf("%14f\n", d);
	// printf("\n");

	// printf("--negative padding--\n");
	// printf("%-14s\n", s);
	// printf("%-14i\n", i);
	// printf("%-14o\n", i);
	// printf("%-14u\n", i);
	// printf("%-14x\n", i);
	// printf("%-14X\n", i);
	// printf("%-14f\n", d);
	// printf("\n");

	// printf("--positive padding with 0--\n");
	// printf("%014i\n", i);
	// printf("%014o\n", i);
	// printf("%014u\n", i);
	// printf("%014x\n", i);
	// printf("%014X\n", i);
	// printf("%014f\n", d);
	// printf("\n");

	// printf("-- space and + --\n");
	// printf("%i\n", i);
	// printf("%i\n", j);
	// printf("% i\n", i);
	// printf("% i\n", j);
	// printf("%+i\n", i);
	// printf("%+i\n", j);
	// printf("\n");

	// printf("-- # --\n");
	// printf("%o\n", i);
	// printf("%#o\n", i);
	// printf("%o\n", j);
	// printf("%#o\n", j);
	// printf("%x\n", i);
	// printf("%#x\n", i);
	// printf("%x\n", j);
	// printf("%#x\n", j);
	// printf("%.f\n", d);
	// printf("%#.f\n", d);
	// printf("\n");

	// printf("-- lengths: hh & h --\n");
	// printf("%hhi\n", (char)255);
	// printf("%hhu\n", (unsigned char)255);
	// printf("%hi\n", (short)255);
	// printf("-- lengths: ll --\n");
	// printf("%lli\n", l);
	// printf("-- lengths: ull --\n");
	// printf("%llu\n", ul);
	// printf("\n");
}

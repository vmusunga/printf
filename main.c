/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:32:49 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/15 15:02:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *res = "brrrt";
	int x;


		int             a = -4;
        int             b = 0;
        char    c = 'a';
        int             d = 2147483647;
        int             e = -2147483648;
        int             f = 42;
        int             g = 25;
        int             h = 4200;
        int             i = 8;
        int             j = -12;
        int             k = 123456789;
        int             l = 0;
        int             m = -12345678;
        char    *n = "abcdefghijklmnop";
        char    *o = "-a";
        char    *p = "-12";
        char    *q = "0";
        char    *r = "%%";
        char    *s = "-2147483648";
        char    *t = "0x12345678";
        char    *u = "-0";
	x = -4;

/*	while (x < 5)
	{
		ft_printf("1	%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("1	%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);

		ft_printf("2	%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("2	%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);

		ft_printf("3	%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("3	%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);

		ft_printf("4	%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("4	%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		x++;
	}
*/

	//	_DUI_

	ft_printf(" 0*%0-*.*d*0 0*%0*.*d*0 \n", 2, 6, 102, 21, 10, -101); //13
	printf(" 0*%0-*.*d*0 0*%0*.*d*0 \n", 2, 6, 102, 21, 10, -101);

	ft_printf(" --0*%-0*.20d*0 0*%-0*.10d*0-- \n", -21, CHAR_MAX, 21, CHAR_MIN);  //19
	printf(" --0*%-0*.20d*0 0*%-0*.10d*0-- \n", -21, CHAR_MAX, 21, CHAR_MIN);

	//ft_printf("%0*d\n", -7, -54);
	//printf("%0*d\n", -7, -54);

	//ft_printf(" --0*%-0*.4d*0 0*%-0*.4d*0-- \n", -21, CHAR_MAX, 7, CHAR_MIN);  //22
	//printf(" --0*%-0*.4d*0 0*%-0*.4d*0-- \n", -21, CHAR_MAX, 7, CHAR_MIN);

	//ft_printf("%9.2d\n", UINT_MAX);		//23
	//printf("%9.2d\n", UINT_MAX);

	//ft_printf("%-9.2d\n", UINT_MAX);		//35
	//printf("%-9.2d\n", UINT_MAX);

	//ft_printf("%-11.10d\n", UINT_MAX);		//44
	//printf("%-11.10d\n", UINT_MAX);

	//ft_printf("%09.2d\n", UINT_MAX);		//47
	//printf("%09.2d\n", UINT_MAX);

	//ft_printf("%011.10d\n", UINT_MAX);		//56
	//printf("%011.10d\n", UINT_MAX);

	return (0);
}


/*
		_D_I_U_

TEST(1, print(" %d ", 0));
        TEST(2, print(" %.d ", 0));
        TEST(3, print(" %-.2d ", 0));
        TEST(4, print(" %-2.2d ", 0));
        TEST(5, print(" %-3.2d ", 0));
        TEST(6, print(" %-3.2d %10.42d ", 0, 0));
        TEST(7, print(" %-3.2d %10.42d ", 1, -1));
        TEST(8, print(" %-3.2d %10.42d ", 10, -10));
        TEST(9, print(" *%-*.*d* *%*.*d* ", 4, 5, 10, 10, 21, -10));
        TEST(10, print(" *%-*.*d* *%*.*d* ", 6, 2, 102, 10, 21, -101));
        TEST(11, print(" *%*.*d* *%*.*d* ", -6, 2, 102, 10, 21, 101));
        TEST(12, print(" 0*%0-*.*d*0 0*%0*.*d*0 ", 6, 2, 102, 10, 21, -101));
        TEST(13, print(" 0*%0-*.*d*0 0*%0*.*d*0 ", 2, 6, 102, 21, 10, -101));
        TEST(14, print(" 0*%0-*d*0 0*%0*d*0 ", 21, 1021, 21, -1011));
        TEST(15, print(" 0*%-0*.10d*0 0*%-0*.0d*0 ", 21, 1021, 21, -1011));
        TEST(16, print(" --0*%0*.0d*0 0*%0*.10d*0-- ", -2, 0, 21, 1));
        TEST(17, print(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, INT_MAX, 21, INT_MIN));
        TEST(18, print(" --0*%0*.0d*0 0*%0*.10d*0-- ", -21, LONG_MAX, 21, LONG_MIN));
        TEST(19, print(" --0*%-0*.20d*0 0*%-0*.10d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN));
        TEST(20, print(" --0*%-0*.2d*0 0*%-0*.2d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN));
        TEST(21, print(" --0*%-0*.3d*0 0*%-0*.3d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN));
        TEST(22, print(" --0*%-0*.4d*0 0*%-0*.4d*0-- ", -21, CHAR_MAX, 21, CHAR_MIN));
        TEST(23, print("%9.2d", UINT_MAX));
        TEST(24, print("%9.10d", UINT_MAX));
        TEST(25, print("%10.0d", UINT_MAX));
        TEST(26, print("%10.1d", UINT_MAX));
        TEST(27, print("%10.2d", UINT_MAX));
        TEST(28, print("%10.10d", UINT_MAX));
        TEST(29, print("%11.0d", UINT_MAX));
        TEST(30, print("%11.1d", UINT_MAX));
        TEST(31, print("%11.2d", UINT_MAX));
        TEST(32, print("%11.10d", UINT_MAX));
        TEST(33, print("%-9.0d", UINT_MAX));
        TEST(34, print("%-9.1d", UINT_MAX));
        TEST(35, print("%-9.2d", UINT_MAX));
        TEST(36, print("%-9.10d", UINT_MAX));
        TEST(37, print("%-10.0d", UINT_MAX));
        TEST(38, print("%-10.1d", UINT_MAX));
        TEST(39, print("%-10.2d", UINT_MAX));
        TEST(40, print("%-10.10d", UINT_MAX));
        TEST(41, print("%-11.0d", UINT_MAX));
        TEST(42, print("%-11.1d", UINT_MAX));
        TEST(43, print("%-11.2d", UINT_MAX));
        TEST(44, print("%-11.10d", UINT_MAX));
        TEST(45, print("%09.0d", UINT_MAX));
        TEST(46, print("%09.1d", UINT_MAX));
        TEST(47, print("%09.2d", UINT_MAX));
        TEST(48, print("%09.10d", UINT_MAX));
        TEST(49, print("%010.0d", UINT_MAX));
        TEST(50, print("%010.1d", UINT_MAX));
        TEST(51, print("%010.2d", UINT_MAX));
        TEST(52, print("%010.10d", UINT_MAX));
        TEST(53, print("%011.0d", UINT_MAX));
        TEST(54, print("%011.1d", UINT_MAX));
        TEST(55, print("%011.2d", UINT_MAX));
        TEST(56, print("%011.10d", UINT_MAX));
        TEST(57, print("%09.0d", UINT_MAX + 1));
        TEST(58, print("%09.1d", UINT_MAX + 1));
        TEST(59, print("%09.2d", UINT_MAX + 1));
        TEST(60, print("%09.10d", UINT_MAX + 1));
        TEST(61, print("%010.0d", UINT_MAX + 1));
        TEST(62, print("%010.1d", UINT_MAX + 1));
        TEST(63, print("%010.2d", UINT_MAX + 1));
        TEST(64, print("%010.10d", UINT_MAX + 1));
        TEST(65, print("%011.0d", UINT_MAX + 1));
        TEST(66, print("%011.1d", UINT_MAX + 1));
        TEST(67, print("%011.2d", UINT_MAX + 1));
        TEST(68, print("%011.10d", UINT_MAX + 1));
        TEST(69, print("%.0d", 0));
        TEST(70, print("%.0d", 5));
        TEST(71, print("%.0d", 10));

        TEST(72, print("%1.d", 0));
        TEST(73, print("%2.d", 0));
        TEST(74, print("%3.d", 0));
        TEST(75, print("%1.1d", 0));
        TEST(76, print("%1.2d", 0));
        TEST(77, print("%1.3d", 0));
        TEST(78, print("%1.1d", 0));
        TEST(79, print("%2.2d", 0));
        TEST(80, print("%3.3d", 0));

        TEST(81, print("%3d", 0));
        TEST(82, print("%-3d", 0));
        TEST(83, print("%03d", 0));
        TEST(84, print("%0*d", -7, -54));
*/

/*		_x_X_
 TEST(3, print(" %-.2x ", 0));
        TEST(4, print(" %-2.2x ", 0));
        TEST(5, print(" %-3.2x ", 0));
        TEST(6, print(" %-3.2x %10.42x ", 0, 0));
        TEST(7, print(" %-3.2x %10.42x ", 1, -1));
        TEST(8, print(" %-3.2x %10.42x ", 10, -10));
        TEST(9, print(" *%-*.*x* *%*.*x* ", 4, 5, 10, 10, 21, -10));
        TEST(10, print(" *%-*.*x* *%*.*x* ", 6, 2, 102, 10, 21, -101));
        TEST(11, print(" *%*.*x* *%*.*x* ", -6, 2, 102, 10, 21, 101));
        TEST(12, print(" 0*%0-*.*x*0 0*%0*.*x*0 ", 6, 2, 102, 10, 21, -101));
        TEST(13, print(" 0*%0-*.*x*0 0*%0*.*x*0 ", 2, 6, 102, 21, 10, -101));
        TEST(14, print(" 0*%0-*x*0 0*%0*x*0 ", 21, 1021, 21, -1011));
        TEST(15, print(" 0*%-0*.10x*0 0*%-0*.0x*0 ", 21, 1021, 21, -1011));
        TEST(16, print(" --0*%0*.0x*0 0*%0*.10x*0-- ", -2, 0, 21, 1));
        TEST(17, print(" --0*%0*.0x*0 0*%0*.10x*0-- ", -21, INT_MAX, 21, INT_MIN));
        TEST(18, print(" --0*%0*.0x*0 0*%0*.10x*0-- ", -21, LONG_MAX, 21, LONG_MIN));
        TEST(19, print(" --0*%-0*.20x*0 0*%-0*.10x*0-- ", -21, CHAR_MAX, 21, CHAR_MIN));
        TEST(20, print(" --0*%-0*.2x*0 0*%-0*.2x*0-- ", -21, UINT_MAX, 21, UINT_MAX + 1));
        TEST(21, print("%9.0x", UINT_MAX));
        TEST(22, print("%9.1x", UINT_MAX));
        TEST(23, print("%9.2x", UINT_MAX));
        TEST(24, print("%9.10x", UINT_MAX));
        TEST(25, print("%10.0x", UINT_MAX));
        TEST(26, print("%10.1x", UINT_MAX));
        TEST(27, print("%10.2x", UINT_MAX));
        TEST(28, print("%10.10x", UINT_MAX));
        TEST(29, print("%11.0x", UINT_MAX));
        TEST(30, print("%11.1x", UINT_MAX));
        TEST(31, print("%11.2x", UINT_MAX));
        TEST(32, print("%11.10x", UINT_MAX));
        TEST(33, print("%-9.0x", UINT_MAX));
        TEST(34, print("%-9.1x", UINT_MAX));
        TEST(35, print("%-9.2x", UINT_MAX));
        TEST(36, print("%-9.10x", UINT_MAX));
        TEST(37, print("%-10.0x", UINT_MAX));
        TEST(38, print("%-10.1x", UINT_MAX));
        TEST(39, print("%-10.2x", UINT_MAX));
        TEST(40, print("%-10.10x", UINT_MAX));
        TEST(41, print("%-11.0x", UINT_MAX));
        TEST(42, print("%-11.1x", UINT_MAX));
        TEST(43, print("%-11.2x", UINT_MAX));
        TEST(44, print("%-11.10x", UINT_MAX));
        TEST(45, print("%09.0x", UINT_MAX));
        TEST(46, print("%09.1x", UINT_MAX));
        TEST(47, print("%09.2x", UINT_MAX));
        TEST(48, print("%09.10x", UINT_MAX));
        TEST(49, print("%010.0x", UINT_MAX));
        TEST(50, print("%010.1x", UINT_MAX));
        TEST(51, print("%010.2x", UINT_MAX));
        TEST(52, print("%010.10x", UINT_MAX));
        TEST(53, print("%011.0x", UINT_MAX));
        TEST(54, print("%011.1x", UINT_MAX));
        TEST(55, print("%011.2x", UINT_MAX));
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:32:49 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 15:55:39 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *res = "brrrrt";
	//int x;


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
	
	/*ft_printf("1 --> %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	printf("2 --> %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);

	ft_printf("A1 --> %-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("A2 --> %-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);

	ft_printf("B1 --> %15s, %15s, %15s, %15s, %15s\n\n", n, o, p, q, r);
	printf("B2 --> %15s, %15s, %15s, %15s, %15s\n\n", n, o, p, q, r);

	ft_printf("C1		%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	printf("C2		%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	*/

	ft_printf("ft : %-*.*x\n", 8, 2, k);
	printf("Re : %-*.*x\n", 8, 2, k);

	ft_printf("ft : %-*.*c\n", 4, 2, c);
	printf("Re : %-*.*c\n", 4, 2, c);

	ft_printf("ft : %-10.3s\n", res);
	printf("Re : %-10.3s\n", res);

	ft_printf("ft : %-010s\n", res);
	printf("Re : %-010s\n", res);
	
	ft_printf("ft : %.*s\n\n", 3, res);
	printf("Re : %.*s\n", 3, res);
	return (0);
}
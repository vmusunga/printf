/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:13:38 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/14 15:01:09 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main()
{
	int x = 0;
	char *bite = NULL;
	char *res = "abc";
	printf("%d", ft_hexalen(x));
	printf("%p", bite);
	return (0);
}
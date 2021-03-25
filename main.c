/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:32:49 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/25 15:03:07 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *res = "brrrrt";
	int x;
	
	//ft_printf("ft : %*.*s\n", 4, 4, res);
	//printf("Re : %*.*s\n", 4, 4, res);

	ft_printf("ft : %-10.3s\n", res);
	//printf("Re : %-10.3s\n", res);

	//ft_printf("ft : %010s\n", res);
	//printf("Re : %010s\n", res);
	
	//ft_printf("ft : %.*s\n\n", 3, res);
	//printf("Re : %.*s\n", 3, res);
	return (0);
}
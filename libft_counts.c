/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_counts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:13:37 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/19 11:19:17 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int	ft_nbrlen(long x)
{
	int	i;

	i = 0;
	if (x == 0)
		return (1);
	if (x < 0)
	{
		i = 1;
		x *= -1;
	}
	while (x != 0)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

int	ft_pointerlen(unsigned long x)
{
	int	i;

	i = 2;
	if (x == 0)
		return (3);
	if (x < 0)
	{
		i += 1;
		x *= -1;
	}
	while (x != 0)
	{
		x = x / 16;
		i++;
	}
	return (i);
}

int	ft_hexalen(unsigned int x)
{
	int	i;

	i = 0;
	if (x == 0)
		return (1);
	if (x < 0)
	{
		i += 1;
		x *= -1;
	}
	while (x != 0)
	{
		x = x / 16;
		i++;
	}
	return (i);
}

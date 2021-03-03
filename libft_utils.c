/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:13:41 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/03 10:43:14 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_strlen(const char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if ((!s))
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

static int	ft_overflow(unsigned long long x, int sign)
{
	unsigned long long min;
	unsigned long long max;

	min = 9223372036854775808U;
	max = 9223372036854775807U;
	if (x > min && sign < 0)
		return (0);
	if (x > max && sign > 0)
		return (-1);
	return (2);
}

int			ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	x;

	sign = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	x = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10;
		x = x + str[i] - 48;
		i++;
	}
	if (ft_overflow(x, sign) != 2)
		return (ft_overflow(x, sign));
	return (x * sign);
}

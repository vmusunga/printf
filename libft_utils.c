/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:13:41 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/19 11:14:11 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, t_flags *flags)
{
	write(1, &c, 1);
	flags->count++;
	return ;
}

void	ft_putstr(char *s, t_flags *flags)
{
	int	i;

	i = 0;
	if ((!s))
		return ;
	flags->count += ft_strlen(s);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static int	ft_overflow(unsigned long long x, int sign)
{
	unsigned long long	min;
	unsigned long long	max;

	min = 9223372036854775808U;
	max = 9223372036854775807U;
	if (x > min && sign < 0)
		return (0);
	if (x > max && sign > 0)
		return (-1);
	return (2);
}

int	ft_atoi(const char *str, int *i)
{
	int					sign;
	unsigned long long	x;

	sign = 1;
	while (str[*i] && (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'
			|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r'))
		(*i)++;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
	x = 0;
	while (str[*i] && str[*i] >= '0' && str[*i] <= '9')
	{
		x = x * 10;
		x = x + str[*i] - 48;
		(*i)++;
	}
	if (ft_overflow(x, sign) != 2)
		return (ft_overflow(x, sign));
	return (x * sign);
}

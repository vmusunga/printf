/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:39:45 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/23 13:05:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, t_flags *flags)
{
	unsigned int	l;
	unsigned int	n;

	l = ft_strlen(base);
	n = nbr;
	if (n >= l)
	{
		ft_putnbr_base(n / l, base, flags);
		ft_putchar(base[n % l], flags);
	}
	else
		ft_putchar(base[n], flags);
}

void	ft_putnbr(int nb, t_flags *flags)
{
	unsigned int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-', flags);
		n = -nb;
	}
	if (n > 9)
	{
		ft_putnbr((n / 10), flags);
		ft_putchar((n % 10 + '0'), flags);
	}
	else
		ft_putchar((n + '0'), flags);
}

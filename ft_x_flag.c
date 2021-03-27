/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:39:28 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 15:56:17 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_x_flag(unsigned long x, t_flags *flags)
{
	char *base;

	base = "0123456789abcdef";
	ft_putnbr_base_x(x, base, flags);
	return ;
}

void	ft_putnbr_base_x(int nbr, char *base, t_flags *flags)
{
	unsigned int	l;
	unsigned int	n;

	l = ft_strlen(base);
	n = nbr;
	if (n >= l)
	{
		ft_putnbr_base(n / l, base, flags);
		if(flags->precision_bool == True)
		{
			if (flags->precision-- > 0)
				ft_putchar(base[n % l], flags);
		}
		else
			ft_putchar(base[n % l], flags);
	}
	else if (flags->precision_bool == True)
	{
		if (flags->precision-- > 0)
			ft_putchar(base[n], flags);
	}
	else
		ft_putchar(base[n], flags);
}
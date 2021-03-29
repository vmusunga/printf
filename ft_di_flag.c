/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:14:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/29 21:08:34 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_di_flag(int x, t_flags *flags)
{
	if (flags->minus)
	{
		flags->zero = 0;
		minus_di_flag(x, flags);
	}
	else
		default_di_flag(x, flags);
	return ;
}

void	default_di_flag(unsigned long x, t_flags *flags)
{
	if (flags->zero && flags->precision_bool == True)
		flags->zero = 0;
	if (flags->width && flags->width > ft_nbrlen(x))
	{
		while (flags->width-- > ft_nbrlen(x))
			ft_putchar('0', flags);
	}
	if (flags->precision_bool == True && flags->precision > ft_nbrlen(x))
	{
		while (flags->precision-- > ft_nbrlen(x))
			ft_putchar('0', flags);
	}
	ft_putnbr(x, flags);
	return ;
}

void	minus_di_flag(unsigned long x, t_flags *flags)
{
	if (flags->zero && flags->precision_bool == True)
		flags->zero = 0;
	if (flags->precision_bool == True && flags->precision > ft_nbrlen(x))
	{
		while (flags->precision-- > ft_nbrlen(x))
			ft_putchar('0', flags);
	}
		ft_putnbr(x, flags);
	if (flags->width)
	{
		if (flags->zero)
		{
			while (flags->width-- > 0)
				ft_putchar('0', flags);
		}
		else
		{
				while (flags->width-- > 0)
					ft_putchar(' ', flags);
		}
	}
	return ;
}
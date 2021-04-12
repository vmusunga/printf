/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:14:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/12 16:05:50 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_di_flag(long x, t_flags *flags)
{
	if (flags->precision_bool == True)
		flags->minus = 0;
	if (flags->precision_bool == True)
		flags->zero = 0;
	if (flags->precision_bool == True && flags->precision == 0 && x == 0)
		return (di_zero(flags));
	if (flags->precision < 0)
		return (negative_precision(x, flags));
	if (flags->precision < ft_nbrlen(x))
		flags->width -= ft_nbrlen(x);
	else
		flags->width -= flags->precision;
	if (flags->minus)
		minus_di_flag(x, flags);
	else if (!flags->minus)
		default_di_flag(x, flags);
	return ;
}

void	default_di_flag(long x, t_flags *flags)
{
	if (flags->zero)
	{
		while (flags->width-- > 0)
				ft_putchar('0', flags);
	}
	else
	{
		printf("%d\n", flags->width);						//find le width+1, pas normal
		while (flags->width-- > 0)
			ft_putchar('b', flags);							// BBBB! should be ' '
	}
	while (flags->precision-- > ft_nbrlen(x))
			ft_putchar('0', flags);
	ft_putnbr(x, flags);
	return ;
}

void	minus_di_flag(long x, t_flags *flags)
{
	while (flags->precision-- > ft_nbrlen(x))
		ft_putchar('0', flags);
	ft_putnbr(x, flags);
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	return ;
}

void	negative_precision(long x, t_flags *flags)
{
	if (flags->minus == 0 && flags->zero == 0)
	{
		while (flags->width-- > 0)
		ft_putchar(' ', flags);
	}
	if (flags->zero)
	{
		while (flags->width-- > 0)
			ft_putchar('0', flags);
		ft_putnbr(x, flags);
	}
	if (!flags->zero)
	{
		ft_putnbr(x, flags);
		while (flags->width-- > 0)
			ft_putchar(' ', flags);
	}
	return ;
}

void	di_zero(t_flags *flags)
{
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	return ;
}
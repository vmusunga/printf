/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:39:28 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/14 18:28:27 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_x_flag(unsigned int x, t_flags *flags, int maj)
{
	char *base;															// MALLOC NEEDED??
	if (maj == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (flags->width > (INT_MAX - 1) || flags->precision > (INT_MAX - 1))
		return ;
	if (flags->precision_bool == True)
		flags->zero = 0;
	if (flags->precision_bool == True && flags->precision == 0 && x == 0)
		return (di_zero(flags));
	if (flags->precision < ft_hexalen(x))
		flags->width -= ft_hexalen(x);
	else
		flags->width -= (flags->precision);
	if (flags->minus == 1)
		minus_x_flag(x, flags, base);
	else if (!flags->minus)
		default_x_flag(x, flags, base);
	return ;
}

void	default_x_flag(unsigned int x, t_flags *flags, char *base)
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
	while (flags->precision-- > ft_hexalen(x))
			ft_putchar('0', flags);
	ft_putnbr_base(x, base, flags);
	return ;
}

void	minus_x_flag(unsigned int x, t_flags *flags, char *base)
{
	while (flags->precision-- > ft_hexalen(x))
		ft_putchar('0', flags);
	ft_putnbr_base(x, base, flags);
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	return ;
}

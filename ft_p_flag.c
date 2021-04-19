/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:07:35 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/19 12:54:54 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*void	ft_p_flag(unsigned long x, t_flags *flags)
{
	char *base;

	base = "0123456789abcdef";
	ft_putstr("0x", flags);
	ft_putnbr_base(x, base, flags);
}*/

void	ft_p_flag(unsigned long x, t_flags *flags)
{
	if (flags->width > (INT_MAX - 1) || flags->precision > (INT_MAX - 1))
		return ;
	if (flags->precision_bool == True)
		flags->zero = 0;
	if (x == 0)
		return (p_zero(x, flags));
	if (flags->precision < ft_pointerlen(x))
		flags->width -= ft_pointerlen(x);
	else
		flags->width -= (flags->precision);
	if (flags->minus == 1)
		minus_p_flag(x, flags);
	else if (!flags->minus)
		default_p_flag(x, flags);
	return ;
}

void	default_p_flag(unsigned long x, t_flags *flags)
{
	char	*base;

	base = "0123456789abcdef";
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	ft_putstr("0x", flags);
	while (flags->precision-- > ft_pointerlen(x))
		ft_putchar('0', flags);
	ft_putnbr_base(x, base, flags);
	return ;
}

void	minus_p_flag(unsigned long x, t_flags *flags)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putstr("0x", flags);
	while (flags->precision-- > ft_pointerlen(x))
		ft_putchar('0', flags);
	ft_putnbr_base(x, base, flags);
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	return ;
}

void	p_zero(unsigned long x, t_flags *flags)
{
	if (flags->minus)
	{
		ft_putstr("0x0", flags);
		while (flags->width-- > ft_pointerlen(x))
			ft_putchar(' ', flags);
	}
	else
	{
		while (flags->width-- > ft_pointerlen(x))
			ft_putchar(' ', flags);
		ft_putstr("0x0", flags);
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:24:30 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/06 18:17:30 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_u_flag(unsigned int u, t_flags *flags)
{
	if (flags->precision_bool == True)
		flags->zero = 0;
	if (flags->precision_bool == True && flags->precision == 0 && u == 0)
		return (u_zero(flags));
	if (flags->precision < 0)
		return (u_negative_precision(u, flags));
	if (flags->precision < ft_nbrlen(u))
		flags->width -= ft_nbrlen(u);
	else
		flags->width -= flags->precision;
	if (flags->minus)
		minus_u_flag(u, flags);
	else if (!flags->minus)
		default_u_flag(u, flags);
	return ;
}

void	default_u_flag(unsigned int u, t_flags *flags)
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
	while (flags->precision-- > ft_nbrlen(u))
			ft_putchar('0', flags);
	ft_putnbr_u(u, flags);
	return ;
}

void	minus_u_flag(unsigned int u, t_flags *flags)
{
	while (flags->precision-- > ft_nbrlen(u))
		ft_putchar('0', flags);
	ft_putnbr_u(u, flags);
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	return ;
}

void	u_negative_precision(unsigned int u, t_flags *flags)
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
		ft_putnbr_u(u, flags);
	}
	if (!flags->zero)
	{
		ft_putnbr_u(u, flags);
		while (flags->width-- > 0)
			ft_putchar(' ', flags);
	}
	return ;
}

void	u_zero(t_flags *flags)
{
	while (flags->width-- > 0)
		ft_putchar(' ', flags);
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:37:55 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 13:59:50 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_s_flag(char *s, t_flags *flags)
{
	if (!s)
		s = "(null)";
	if (flags->precision_bool == True)
	{
		if (flags->precision < ft_strlen(s))
			flags->width -= flags->precision;
		else
			flags->width -= ft_strlen(s);
	}
	else
		flags->width -= ft_strlen(s);
	if (flags->minus)
	{
		flags->zero = 0;
		minus_width(s, flags);
	}
	else
		default_width(s, flags);
	return ;
}

void	default_width(char *s, t_flags *flags)
{
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
	if (flags->precision_bool == True && flags->precision < ft_strlen(s))
	{
		while (flags->precision--)
			ft_putchar(*s++, flags);
	}
	else
		ft_putstr(s, flags);
	return ;
}

void	minus_width(char *s, t_flags *flags)
{
	if (flags->precision_bool == True && flags->precision < ft_strlen(s))
	{
		while (flags->precision--)
			ft_putchar(*s++, flags);
	}
	else
		ft_putstr(s, flags);
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
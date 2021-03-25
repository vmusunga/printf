/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:37:55 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/25 15:10:57 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_s_flag(char *s, t_flags *flags)
{
	if (flags->precision)
	{
		if (flags->precision <= ft_strlen(s))
			flags->width -= flags->precision;
		else
			flags->width -= ft_strlen(s);
	}
	if (flags->minus)
		minus_width(s, flags);
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
	if (flags->precision && flags->precision < ft_strlen(s))
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
	if (flags->precision && flags->precision < ft_strlen(s))
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
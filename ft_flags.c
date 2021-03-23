/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:10:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/23 13:03:12 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_struct_init(t_flags *flags)
{
	flags->count = 0;
	flags->dot = 0;
	flags->minus = 0;
	flags->precision = 0;
	flags->zero = 0;
	flags->width = 0;
}

void	ft_width_flags(const char *str, t_flags *flags, int *i)
{
	if (str[*i] == '*')
	{
		flags->width = 1;
		*i++;
	}
	else if (ft_isdigit(str[*i]))
	{
		flags->width = ft_atoi(&str[*i]);
	}
	if (str[*i] == '.')
	{
		flags->precision = 1;
	}
}

void	ft_fill_flags(const char *str, t_flags *flags, int *i)
{
	ft_struct_init(flags);
	while (str[*i] == '0' || str[*i] == '-')
	{
		if (str[*i] == '0')
			flags->zero = 1;
		else if (str[*i] == '-')
			flags->minus = 1;
		*i++;
	}
}

int		ft_flags(const char *str, int *i, va_list v_list, t_flags *flags)
{
	int count;

	count = 1;
	if (str[*i] == 'c')
		ft_c_flag((char)va_arg(v_list, int), flags);
	else if (str[*i] == 's')
		ft_s_flag(va_arg(v_list, char*), flags);
	else if (str[*i] == 'p')
		ft_p_flag(va_arg(v_list, unsigned long), flags);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_di_flag(va_arg(v_list, int), flags);
	else if (str[*i] == '%')
	{
		ft_putchar('%', flags);
		return (count);
	}
	else if (str[*i] == 'u')
		return (5);
	else if (str[*i] == 'x')
		return (6);
	else if (str[*i] == 'X')
		return (7);
	(*i)++;
	return (count);
}

void	ft_c_flag(char c, t_flags *flags)
{
	int count;

	count = 1;
	ft_putchar(c, flags);
}

void	ft_s_flag(char *s, t_flags *flags)
{
	ft_putstr(s, flags);
}

void	ft_p_flag(unsigned long x, t_flags *flags)
{
	char *base;

	base = "0123456789abcdef";
	ft_putstr("0x", flags);
	ft_putnbr_base(x, base, flags);
}

void	ft_di_flag(int x, t_flags *flags)
{
	ft_putnbr(x, flags);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:10:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/25 16:19:16 by vmusunga         ###   ########.fr       */
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

void	precision_width_flags(const char *str, va_list v_list, t_flags *flags, int *i)
{
	if (str[*i] == '*')
	{
		flags->width = va_arg(v_list, int);
		(*i)++;
	}
	else if (ft_isdigit(str[*i]))
		flags->width = ft_atoi(str, i);
	if (str[*i] == '.')
	{
		flags->precision = 1;
		(*i)++;
		if (str[*i] == '*')
		{
			flags->precision = va_arg(v_list, int);  //what if 0 ?
			(*i)++;
		}
		else if (ft_isdigit(str[*i]))
			flags->precision = ft_atoi(str, i);
	}
	if (flags->precision < 0)
		flags->precision = 0;
	if (flags->width < 0)
		flags->width *= -1;
	return ;
}

void	ft_check_flags(const char *str, t_flags *flags, int *i, va_list v_list)
{
	ft_struct_init(flags);
	while (str[*i] == '0' || str[*i] == '-')
	{
		if (str[*i] == '0')
			flags->zero = 1;
		else if (str[*i] == '-')
			flags->minus = 1;
		(*i)++;
	}
	if (ft_isdigit(str[*i]))
		flags->width = ft_atoi(str, i);
	precision_width_flags(str, v_list, flags, i);
	return ;
}

void	ft_flags(const char *str, int *i, va_list v_list, t_flags *flags)
{
	ft_check_flags(str, flags, i, v_list);
	if (str[*i] == 'c')
		ft_c_flag((char)va_arg(v_list, int), flags);
	else if (str[*i] == 's')
		ft_s_flag(va_arg(v_list, char*), flags);
	else if (str[*i] == 'p')
		ft_p_flag(va_arg(v_list, unsigned long), flags);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_di_flag(va_arg(v_list, int), flags);
	else if (str[*i] == '%')
		ft_putchar('%', flags);
	else if (str[*i] == 'u')
		return ;
	else if (str[*i] == 'x')
		return ;
	else if (str[*i] == 'X')
		return ;
	(*i)++;
	return ;
}

void	ft_c_flag(char c, t_flags *flags)
{
	ft_putchar(c, flags);
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
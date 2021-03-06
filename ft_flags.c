/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:10:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/19 14:27:25 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	precision_width_flags(const char *str, va_list v_list,
		t_flags *flags, int *i)
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
		flags->precision_bool = True;
		(*i)++;
		if (str[*i] == '*')
		{
			flags->precision = va_arg(v_list, int);
			(*i)++;
		}
		else if (ft_isdigit(str[*i]))
			flags->precision = ft_atoi(str, i);
	}
	ft_negative_check(flags);
	return ;
}

void	ft_negative_check(t_flags *flags)
{
	if (flags->precision < 0)
	{
		flags->precision = 0;
		flags->precision_bool = False;
	}
	if (flags->width < 0)
	{
		flags->minus = 1;
		flags->width *= -1;
	}
	return ;
}

void	ft_check_flags(const char *str, t_flags *flags, int *i, va_list v_list)
{
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
		ft_c_flag(va_arg(v_list, int), flags);
	else if (str[*i] == 's')
		ft_s_flag(va_arg(v_list, char *), flags);
	else if (str[*i] == 'p')
		ft_p_flag(va_arg(v_list, unsigned long), flags);
	else if (str[*i] == 'd' || str[*i] == 'i')
		ft_di_flag(va_arg(v_list, int), flags);
	else if (str[*i] == '%')
		ft_pourcent_flag(flags);
	else if (str[*i] == 'u')
		ft_u_flag(va_arg(v_list, unsigned int), flags);
	else if (str[*i] == 'x')
		ft_x_flag(va_arg(v_list, unsigned int), flags, 0);
	else if (str[*i] == 'X')
		ft_x_flag(va_arg(v_list, unsigned int), flags, 1);
	(*i)++;
	return ;
}

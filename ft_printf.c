/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/19 11:18:15 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_struct_init(t_flags *flags)
{
	flags->precision_bool = False;
	flags->dot = 0;
	flags->minus = 0;
	flags->precision = 0;
	flags->zero = 0;
	flags->width = 0;
	return ;
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	v_list;
	t_flags	*flags;

	i = 0;
	flags = malloc(sizeof(t_flags));
	va_start(v_list, str);
	flags->count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_struct_init(flags);
			ft_flags(str, &i, v_list, flags);
		}
		else
		{
			ft_putchar(str[i], flags);
			i++;
		}
	}
	va_end(v_list);
	free(flags);
	return (flags->count);
}

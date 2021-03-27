/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 12:57:42 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int i;
	va_list v_list;
	t_flags *flags;

	i = 0;
	flags = malloc(sizeof(t_flags));
	va_start (v_list, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i++], flags);
		else if (str[i++] == '%')
			ft_flags(str, &i, v_list, flags);
	}
	va_end(v_list);
	return (flags->count);
}

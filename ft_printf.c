/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/22 16:48:33 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int i;
	int count;
	va_list v_list;

	i = 0;
	count = 0;
	va_start (v_list, str);
	while (str[i])
	{
		if (str[i++] == '%')
			count += ft_flags(str, &i, v_list);
		else
		{
			ft_putchar_fd(str[i++], 1);
			count++;
		}
	}
	va_end(v_list);
	return (count);
}

int main()
{
	char *res = "brrrrt";

	ft_printf("%p", res);
	return (0);
}
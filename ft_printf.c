/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/22 15:36:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int i;
	int count;
	va_list v_list;

	count = 0;
	i = 0;
	va_start (v_list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_flags(str, &i, v_list);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}
		i++;
	}
	va_end(v_list);
	return (count);
}

int main()
{
	ft_printf("%s", "HelloWorld");
	return (0);
}
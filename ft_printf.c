/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/03 15:56:14 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_flags(const char * restrict f, int i)
{
	char *flags;
	int pos;

	flags = "cspdiuxX";
	pos = ft_strcmp_pos(flags, f[i + 1]);
	if (pos == 0)
		return (0);
	if (pos == 1)
		return (1);
	if (pos == 2)
		return (2);
	if (pos == 3)
		return (3);
	if (pos == 4)
		return (4);
	if (pos == 5)
		return (5);
	if (pos == 6)
		return (6);
	if (pos == 7)
		return (7);
}

int		ft_printf(const char *str, ...)
{
	int i;
	
	i = 0;
	va_list v_list;
	va_start (v_list, str);
	while (str[i] && str[i] != '%')
		ft_putchar_fd(str[i++], 1);
	if (str[i] == '%')
	{
		if (ft_check_flags(str, i) == 0)
			ft_putchar_fd(va_arg(v_list, char), 1);
		//if (ft_check_flags(str, i) == 1)
			//ft_putstr_fd(va_arg(v_list, *char), 1);
	}
	va_end(v_list);
	return (0);
}

int main()
{
	ft_printf("%s", "HelloWorld");
	return (0);
}
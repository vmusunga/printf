/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/24 12:30:32 by vmusunga         ###   ########.fr       */
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
	ft_struct_init(flags);
	va_start (v_list, str);
	while (str[i])
	{
		if (str[i++] == '%')
		{
			ft_flags(str, &i, v_list, flags);
			precision_width_flags(str, v_list, flags, &i);
			ft_fill_flags(str, flags, &i);
		}
		else
			ft_putchar(str[i++], flags);

	}
	va_end(v_list);
	return (flags->count);
}

int main()
{
	char *res = "brrrrt";

	ft_printf("%s", res);
	return (0);
}
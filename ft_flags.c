/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:10:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/22 15:38:56 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flags(const char *str, int *i, va_list v_list)
{
	int count;

	if (str[*i] == 'c')
		count = ft_c_flag(va_arg(v_list, int));
	else if (str[*i] == 's')
		count = ft_s_flag(va_arg(v_list, char*));
	else if (str[*i] == 'p')
		count = ft_p_flag(va_arg(v_list, int));
	else if (str[*i] == 'd')
		return (3);
	else if (str[*i] == 'i')
		return (4);
	else if (str[*i] == 'u')
		return (5);
	else if (str[*i] == 'x')
		return (6);
	else if (str[*i] == 'X')
		return (7);
	return (count);
}

int		ft_c_flag(char c)
{
	int count;

	count = 1;
	ft_putchar_fd(&c, 1);
	return (1);
}

int		ft_s_flag(char *s)
{
	int count;
	count = ft_strlen(s);

	ft_putstr_fd(s, 1);
	return(count);
}

int		ft_p_flag(char c)
{

}
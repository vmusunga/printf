/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:13:25 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 15:00:29 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c_flag(char c, t_flags *flags)
{
	if (flags->minus)
	{
		ft_putchar(c, flags);
		while (flags->width-- > 1)
				ft_putchar(' ', flags);
	}
	else
	{
		while (flags->width-- > 1)
			ft_putchar(' ', flags);
		ft_putchar(c, flags);
	}
	return ;
}

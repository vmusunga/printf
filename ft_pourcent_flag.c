/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcent_flag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:27:23 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/19 12:41:25 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pourcent_flag(t_flags *flags)
{
	if (flags->minus)
	{
		ft_putchar('%', flags);
		while (flags->width-- > 1)
			ft_putchar(' ', flags);
	}
	else
	{
		if (flags->zero)
		{
			while (flags->width-- > 1)
				ft_putchar('0', flags);
		}
		else
		{
			while (flags->width-- > 1)
				ft_putchar(' ', flags);
		}
		ft_putchar('%', flags);
	}
	return ;
}
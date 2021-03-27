/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:07:35 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 15:23:55 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p_flag(unsigned long x, t_flags *flags)
{
	char *base;

	base = "0123456789abcdef";
	ft_putstr("0x10", flags);
	ft_putnbr_base(x, base, flags);
}

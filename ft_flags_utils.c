/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:39:45 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/22 16:54:58 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	l;
	unsigned int	n;

	l = ft_strlen(base);
	n = nbr;
	if (n >= l)
	{
		ft_putnbr_base(n / l, base);
		ft_putchar_fd(base[n % l], 1);
	}
	else
		ft_putchar_fd(base[n], 1);
}
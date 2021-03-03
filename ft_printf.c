/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:08 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/03 10:45:55 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int		ft_printf(const char * restrict format, ...)
{
	va_list args;
	int i;
	
	i = 0;
	while (format[i] && format[i] != '%')
		ft_putchar_fd(format[i++], 1);
	if (format[i] == '%')
		
	//va_start (args, format[i]);

	//va_end(args);
	return (0);
}

int main()
{
	ft_printf("HELLO WORLD", 1);
	return (0);
}
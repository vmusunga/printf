/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:23:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/03 10:41:15 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"

typedef struct	t_list
{
	char	*va1;
	char	*va2;
}				t_list;

size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_atoi(const char *str);

char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:23:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/22 16:40:17 by vmusunga         ###   ########.fr       */
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

int		ft_printf(const char *str, ...);

size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_strcmp_pos(char *s1, char c);
int		ft_atoi(const char *str);

int		ft_flags(const char *str, int *i, va_list v_list);
int		ft_s_flag(char *s);
int		ft_c_flag(char c);
int		ft_p_flag(unsigned long);

void	ft_putnbr_base(int nbr, char *base);

char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
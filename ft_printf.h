/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:23:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/24 12:30:30 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"

typedef struct	s_flags
{
	int count;
	int minus;
	int precision;
	int dot;
	int zero;
	int width;
}				t_flags;

int		ft_printf(const char *str, ...);

size_t	ft_strlen(const char *str);
void	ft_putchar(char c, t_flags *flags);
void	ft_putstr(char *s, t_flags *flags);
int		ft_isdigit(char c);
int		ft_atoi(const char *str, int *i);
void	ft_putnbr(int nb, t_flags *flags);

void	ft_struct_init(t_flags *flags);
void	precision_width_flags(const char *str, va_list v_list, t_flags *flags, int *i);
void	ft_fill_flags(const char *str, t_flags *flags, int *i);
int		ft_flags(const char *str, int *i, va_list v_list, t_flags *flags);
void	ft_c_flag(char c, t_flags *flags);
void	ft_s_flag(char *s, t_flags *flags);
void	ft_p_flag(unsigned long x, t_flags *flags);
void	ft_di_flag(int x, t_flags *flags);

void	ft_putnbr_base(int nbr, char *base, t_flags *flags);

char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
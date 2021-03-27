/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:23:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/03/27 15:49:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"

typedef enum	{True, False}	t_bool;

typedef struct	s_flags
{
	t_bool precision_bool;
	int count;
	int minus;
	int precision;
	int dot;
	int zero;
	int width;
}				t_flags;

int		ft_printf(const char *str, ...);

int		ft_strlen(const char *str);
void	ft_putchar(char c, t_flags *flags);
void	ft_putstr(char *s, t_flags *flags);
int		ft_isdigit(char c);
int		ft_atoi(const char *str, int *i);
void	ft_putnbr(int nb, t_flags *flags);

void	ft_check_flags(const char *str, t_flags *flags, int *i, va_list v_list);
void	ft_struct_init(t_flags *flags);
void	precision_width_flags(const char *str, va_list v_list, t_flags *flags, int *i);

void	ft_flags(const char *str, int *i, va_list v_list, t_flags *flags);

void	ft_c_flag(char c, t_flags *flags);

void	ft_s_flag(char *s, t_flags *flags);
void	default_width(char *s, t_flags *flags);
void	minus_width(char *s, t_flags *flags);

void	ft_x_flag(unsigned long x, t_flags *flags);
void	ft_p_flag(unsigned long x, t_flags *flags);
void	ft_di_flag(int x, t_flags *flags);

void	ft_putnbr_base(int nbr, char *base, t_flags *flags);
void	ft_putnbr_base_x(int nbr, char *base, t_flags *flags);

char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
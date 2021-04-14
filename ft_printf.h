/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:23:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/04/14 18:53:40 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"
# include "limits.h"

typedef enum e_bools {True, False}	t_bool;

typedef struct s_flags
{
	t_bool	precision_bool;
	int		count;
	int		minus;
	int		precision;
	int		dot;
	int		zero;
	int		width;
}				t_flags;

int		ft_printf(const char *str, ...);

int		ft_strlen(const char *str);
int		ft_nbrlen(long x);
void	ft_putchar(char c, t_flags *flags);
void	ft_putstr(char *s, t_flags *flags);
int		ft_isdigit(char c);
int		ft_atoi(const char *str, int *i);
void	ft_putnbr(long nb, t_flags *flags);
void	ft_putnbr_u(unsigned int nb, t_flags *flags);

void	ft_check_flags(const char *str, t_flags *flags, int *i, va_list v_list);
void	ft_struct_init(t_flags *flags);
void	precision_width_flags(const char *str, va_list v_list, t_flags *flags, int *i);

void	ft_flags(const char *str, int *i, va_list v_list, t_flags *flags);

void	ft_c_flag(char c, t_flags *flags);

void	ft_s_flag(char *s, t_flags *flags);
void	default_width(char *s, t_flags *flags);
void	minus_width(char *s, t_flags *flags);

void	ft_di_flag(long x, t_flags *flags);
void	default_di_flag(long x, t_flags *flags);
void	minus_di_flag(long x, t_flags *flags);
void	negative_precision(long x, t_flags *flags);
void	di_zero(t_flags *flags);

void	ft_u_flag(unsigned int u, t_flags *flags);
void	default_u_flag(unsigned int x, t_flags *flags);
void	minus_u_flag(unsigned int x, t_flags *flags);
void	u_negative_precision(unsigned int x, t_flags *flags);
void	u_zero(t_flags *flags);

void	ft_x_flag(unsigned int x, t_flags *flags, int maj);
int		ft_hexalen(unsigned int x);
void	default_x_flag(unsigned int x, t_flags *flags, char *base);
void	minus_x_flag(unsigned int x, t_flags *flags, char *base);

void	ft_p_flag(unsigned long x, t_flags *flags);
int		ft_pointerlen(unsigned long x);
void	ft_putnbr_base(int nbr, char *base, t_flags *flags);
void	default_p_flag(unsigned long x, t_flags *flags);
void	minus_p_flag(unsigned long x, t_flags *flags);
void	p_zero(unsigned long x, t_flags *flags);

char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
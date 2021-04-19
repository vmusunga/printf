# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 12:31:33 by vmusunga          #+#    #+#              #
#    Updated: 2021/04/19 12:31:38 by vmusunga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		ft_printf.c\
				ft_flags.c\
				libft_utils.c\
				libft_counts.c\
				ft_flags_utils.c\
				ft_s_flag.c\
				ft_c_flag.c\
				ft_pourcent_flag.c\
				ft_p_flag.c\
				ft_x_flag.c\
				ft_di_flag.c\
				ft_u_flag.c\

OBJS	=		$(SRCS:.c=.o)
OBJS_BONUS =	$(BONUS:.c=.o)
NAME	=		libftprintf.a
CC		=		gcc
LIBC	=		ar rc
CFLAGS	=		-Wall -Werror -Wextra
RM		=		rm -f
.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(OBJS_BONUS) $(OBJS)
			$(LIBC) $(NAME) $(OBJS_BONUS) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

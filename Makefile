# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 12:31:33 by vmusunga          #+#    #+#              #
#    Updated: 2021/03/23 11:09:47 by vmusunga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		ft_printf.c\
				ft_flags.c\
				libft_utils.c\
				ft_flags_utils.c\

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

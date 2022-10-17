# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 21:17:02 by hidhmmou          #+#    #+#              #
#    Updated: 2022/08/10 21:29:21 by hidhmmou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./includes
NAME = libft.a
RM = rm -f

all:	${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

srcs/ft_putchar.o: srcs/ft_putchar.c
			${CC} ${CFLAGS} -c srcs/ft_putchar.c
			mv ft_putchar.o srcs

srcs/ft_swap.o: srcs/ft_swap.c
			${CC} ${CFLAGS} -c srcs/ft_swap.c
			mv ft_swap.o srcs

srcs/ft_putstr.o: srcs/ft_putstr.c
			${CC} ${CFLAGS} -c srcs/ft_putstr.c
			mv ft_putstr.o srcs

srcs/ft_strlen.o: srcs/ft_strlen.c
			${CC} ${CFLAGS} -c srcs/ft_strlen.c
			mv ft_strlen.o srcs

srcs/ft_strcmp.o: srcs/ft_strcmp.c
			${CC} ${CFLAGS} -c srcs/ft_strcmp.c
			mv ft_strcmp.o srcs

clean:
		${RM} ${OBJS}
fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
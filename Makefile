# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 11:00:17 by ahomari           #+#    #+#              #
#    Updated: 2023/12/01 09:44:44 by ahomari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_hexa_putnbr.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c \
		ft_put_p.c
OBJS = ${SRC:.c=.o}
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
NAME = libftprintf.a

all: ${NAME}

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@
	
${NAME}: ${OBJS} 
	${LIBC} ${NAME} ${OBJS}
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
re: fclean all

.PHONY: clean
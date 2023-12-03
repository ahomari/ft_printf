# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 11:00:17 by ahomari           #+#    #+#              #
#    Updated: 2023/12/02 20:53:02 by ahomari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_hexa_putnbr.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_put_p.c
OBJS = ${SRC:.c=.o}
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
NAME = libftprintf.a

all: ${NAME}

%.o: %.c ft_printf.h
	${CC} ${FLAGS} -c $< -o $@
	
${NAME}: ${OBJS} 
	${LIBC} ${NAME} ${OBJS}
	
clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 
	
re: fclean all

.PHONY: clean
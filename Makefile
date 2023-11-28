SRC =  ft_hexa_putnbr.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c \
		ft_put_p.c
OBJS = ${SRC:.c=.o}
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
NAME = libftprintf.a
%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} 
	${LIBC} ${NAME} ${OBJS}
all: ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}
re: fclean all

.PHONY: fclean all re  clean
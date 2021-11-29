# -*- Makefile -*-

CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SOURCE = Fonctions/print_adress.c Fonctions/print_char.c Fonctions/print_str.c Fonctions/print_HEX.c Fonctions/print_hexa.c Fonctions/print_int.c Fonctions/print_unsigned.c ft_printf.c

all : $(NAME)

SRC_OBJECT = $(SOURCE:.c=.o)

$(NAME): $(SRC_OBJECT)
	ar -rcs $(NAME) $(SRC_OBJECT)

clean: 
	rm -f $(SRC_OBJECT)
fclean:clean
	rm -f libftprintf.a
re:fclean all
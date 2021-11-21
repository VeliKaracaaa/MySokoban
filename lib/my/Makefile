##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_getnbr.c		\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c		\
		my_strcpy.c		\
		my_strlen.c		\
		my_strncpy.c	\

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

HEADER	=	my.h

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir ../../include
	cp $(HEADER) ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -rf ../../include

re: fclean all

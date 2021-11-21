##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_sokoban.c					\
		message.c						\
		my_new_array.c					\
		my_strlen_find_backslash_n.c	\
		open_and_read.c					\
		move.c							\
		set_position.c					\
		x_move.c							\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-I./include/ -g

all: $(NAME)

make_lib:
	make -C lib/my

$(NAME): make_lib $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy -lncurses $(CFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)
	rm -rf include
	make fclean -C lib/my

re: fclean all

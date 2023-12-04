##
## EPITECH PROJECT, 2023
## MAKEFILE MAIN
## File description:
## A program that do simple operation.
##

SRC	=	main.c	\
		event.c	\
		window.c	\

OBJ	=	$(SRC:.c .o)

NAME	=	projet

all:
	make -C ./lib/my
	gcc $(SRC) -o $(NAME) -L. -lmy \
	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	make clean -C ./lib/my
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re:	fclean all

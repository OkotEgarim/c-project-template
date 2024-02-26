##
## EPITECH PROJECT, 2023
## MAKEFILE MAIN
## File description:
## A program that do simple operation.
##

SRC	=	main.c	\

OBJ	=	$(SRC:.c .o)

NAME	=	projet

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc $(SRC) -o $(NAME) -L. -lmy

clean:
	make clean -C ./lib/my
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re:	fclean all

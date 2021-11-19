##
## EPITECH PROJECT, 2021
## makeflie project
## File description:
## task01 day10
##

SRC	=	do-op_main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	do-op

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) -L../lib/ -lmy

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

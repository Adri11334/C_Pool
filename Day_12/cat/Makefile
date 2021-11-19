##
## EPITECH PROJECT, 2021
## makeflie project
## File description:
## task01 day10
##

SRC	=	main.c

OBJ	=	$(SRC..c=.o)

NAME	=	cat

GCCFLAGS	=	-L ../lib -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME) $(GCCFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

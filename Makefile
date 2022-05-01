SRC		= 	$(wildcard *.c **/*.c)

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-g3

NAME	=	my_sokoban

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -Iinclude/ -lm -lncurses

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
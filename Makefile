##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=		./main.c	\
			./main.h	\
			./path.c	\
			./exec.c	\
			./get_arg.c	\
			./build_cd.c	\
			./lib/my/my_printf.c	\
			./lib/my/my_putchar.c	\
			./lib/my/my_put_nbr.c	\
			./lib/my/my_putstr.c	\
			./lib/my/my_getnbr.c	\
			./lib/my/my_str_isnum.c	\
			./lib/my/my_strlen.c	\
			./lib/my/my_strcmp.c	\
			./lib/my/my_show_wordtab.c	\
			./lib/my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME)

clean:
	rm *.o
	rm lib/my/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean

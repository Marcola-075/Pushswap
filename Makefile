##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	manage_lklist.c	\
		s_funct.c	\
		p_funct.c	\
		r_funct.c	\
		rr_funct.c	\
		checks.c	\
		pushswap_alg.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-I ./include

LIB	=	-L ./lib/ -lmy

all:		$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS)

clean:
		rm -f $(OBJ)
		make -sC ./lib/my clean

fclean:	clean
		rm -f $(NAME)
		make -sC ./lib/my fclean

re:		fclean all

##
## EPITECH PROJECT, 2019
## Makefile library
## File description:
## compile lib functions
##

SRC		= 	my_printf.c\
			funcptr.c\
			my_put.c\
			my_strlen.c\
			my_revstr.c\
			my_str_isnum.c\
			my_putstr.c\
			my_putchar.c\
			practical_function.c\
			my_strdup.c\
			my_put_nbr.c\
			my_getnbr.c\
			my_put_dec.c\
			my_pow.c\
			my_put_base.c\
			my_strcmp.c

OBJ 	=	$(SRC:.c=.o)

NAME 	=	libmy.a

MY		=	my.h

LIB_F	=	../

INC_F	=	../../include

CFLAGS	=	-W -Wall -Wextra

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) $(LIB_F)
		cp $(MY) $(INC_F)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME) $(LIB_F)$(NAME)

re:		fclean all
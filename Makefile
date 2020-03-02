##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC				=	src/events.c\
					src/set_windows_parameters.c\
					src/set_sprites_parameters.c\
					src/animation.c\
					src/animation2.c\
					src/window_management.c\
					src/initialize.c\
					src/animation_drake2.c\
					src/animation_drake2_2.c\
					src/animation_drake3.c\
					src/animation_drake4.c\
					src/animation_drake4_2.c\
					src/score.c\
					src/init_muse.c\
					src/level.c\
					src/choose_lvl.c\
					src/level_management.c\
					src/level_management2.c\
					src/init_glob.c\
					src/init_sprites.c\
					src/leveling.c\
					src/destroy.c\
					src/free.c

SRC_M			=	src/main.c

SRC_UT			=	tests/*.c

OBJ				=	$(SRC:.c=.o)

OBJ_M			=	$(SRC_M:.c=.o)

INCLUDE			=	-I./include

NAME			=	my_hunter

NAME_UT			=	unit_test

CFLAGS			=	-W -Werror -Wall -Wextra -I./include -g

CFLAGS_UT		=	-lcriterion --coverage

LFLAGS			=	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -lncurses -L./lib/ -lmy

RM				=	rm -rf

LINK			=	make -C lib/my

CLEAN_LINK		=	make clean -C lib/my/

all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		$(LINK)
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(LFLAGS) $(CFLAGS)

tests_run:
		$(LINK)
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) $(LFLAGS)
		./$(NAME_UT)

clean:
		$(RM) $(OBJ) $(OBJ_UT) $(OBJ_M)
		$(CLEAN_LINK)

fclean:		clean fclean_ut
		$(RM) $(NAME)
		$(RM) *.gcda *.gcno
		$(RM) lib/libmy.a
		$(RM) lib/my/libmy.a
		$(RM) lib/libprint.a
		$(RM) lib/printf/libprint.a

fclean_ut:	clean
		$(RM) $(NAME_UT)
		$(RM) *.gcda *.gcno

re:		fclean all

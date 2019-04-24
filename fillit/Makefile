# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/12/11 14:10:56 by vicaster     #+#   ##    ##    #+#        #
#    Updated: 2019/01/07 17:37:58 by vicaster    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#	Rappel des variables automatiques:
#	$@ : produit (ou but) de la règle
#	$< : nom de la première dépendance (ou source)
#	$? : toutes les dépendances plus récentes que le but
#	$^ : toutes les dépendances
#	$+ : idem mais chaque dépendance apparait autant de fois qu'elle est cité
#	et l'ordre d'apparition est conservé.

##############################################################################
##								COULEURS									##
##############################################################################

DEFAULT = "\033[0m"
HIGHLIGHT = "\033[1m"
UNDERLINE = "\033[4m"
BLINK = "\033[5m"
BLACK = "\033[30m"
RED = "\033[31m"
GREEN = "\033[32m"
YELLOW = "\033[33m"
BLUE = "\033[34m"
PURPLE = "\033[35m"
CYAN = "\033[36m"
WHITE = "\033[37m"

##############################################################################
##								MAKEFILE									##
##############################################################################

NAME = fillit
INC = fillit.h
CC = gcc
CFLAGS = -Wextra -Werror -Wall
SRC =	check_tetri.c\
		fillit.c\
		ft_bdd.c\
		ft_set0.c\
		ft_sqrt.c\
		tools.c\
		reader.c\
		ft_tetri_clean.c\
		main.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c fillit.h
	@$(CC) $(CFLAGS) -c $<
	
libft:
	@cd libft && make rc

$(NAME): $(OBJ)
	@cd libft && make re && cd ..
	@$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)
	@echo $(GREEN)"           _"
	@echo "          |)|"
	@echo "          | |"
	@echo "          | |_____"
	@echo "         /    (]__)"
	@echo "        /    (]___)"
	@echo "       /    (]___)"
	@echo "      /   ___(]_)"
	@echo "_________/______________\n"$(WHITE)

ex: $(NAME)
	@time ./fillit ../sample

clean:
	@rm -f $(OBJ)
	@cd libft && rm -f *.o && cd ..

fclean: clean
	@rm -f $(NAME)
	@cd libft && rm -f libft.a && cd ..

re: fclean all

rc: re
	@make clean

.PHONY: all clean fclean re libft ex

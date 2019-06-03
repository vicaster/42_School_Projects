# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vicaster <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/05/22 17:03:41 by vicaster     #+#   ##    ##    #+#        #
#    Updated: 2019/05/22 18:21:54 by vicaster    ###    #+. /#+    ###.fr      #
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

DEFAULT =\033[0m
HIGHLIGHT =\033[1m
UNDERLINE =\033[4m
BLINK =\033[5m
BLACK =\033[30m
RED =\033[31m
GREEN =\033[32m
YELLOW =\033[33m
BLUE =\033[34m
PURPLE =\033[35m
CYAN =\033[36m
WHITE =\033[37m


##############################################################################
##								MAKEFILE									##
##############################################################################


SRC_PATH = src
OBJ_PATH = obj
CPPFLAGS = -Iinclude  # les includes seront dans le dossier include
LDFLAGS = -Llibft
LDLIBS = -lft

SRC_NAME =  main.c

NAME = a.out
CC = gcc
CFLAGS = -Werror -Wall -Wextra
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))


###########################################################################
#                               RULES                                     #
###########################################################################


all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true # 2> /dev/null pour cacher les messages d'erreurs
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

rc: re clean

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re, rc

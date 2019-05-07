# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/12/11 14:10:56 by vicaster     #+#   ##    ##    #+#        #
#    Updated: 2019/05/07 18:23:56 by vicaster    ###    #+. /#+    ###.fr      #
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

NAME = ft_printf
CC = gcc
FLAG = -Wall -Wextra -Werror -g
FLAG2 = -fsanitize=address
SRC =	src/a_ft_printf.c src/b_check_analyse.c src/b_options.c src/c_resolve_printf.c\
src/d_menu_a.c src/d_menu_b.c src/e_resolve_options.c src/f_resolve_options.c\
src/g_ft_count.c src/main.c src/tools_a.c src/tools_b.c src/tools_c.c
OBJ = $(SRC:.c=.o)
LFTDIR = libft
INC = -I./$(LFTDIR) -I.
LFT = -L $(LFTDIR) -lft
RM = /bin/rm

all: LFTC $(NAME)

LFTC:
	@$(MAKE) -C $(LFTDIR)

$(NAME): $(OBJ) $(NAME).h $(LFTDIR)/libft.a Makefile
	@$(CC) $(FLAG) $(INC) $(LFT) $(OBJ) -o $(NAME)
	@echo "${DEFAULT}\n${PURPLE} ----------------------\n|-> ${GREEN}$(NAME) compiled ${PURPLE}|\n ----------------------${DEFAULT}"

clean:
	@$(MAKE) -C $(LFTDIR) $@
	@$(RM) -rf $(OBJ)
	@echo "${PURPLE}|-> ${RED}objects removed${DEFAULT}"

fclean: clean
	@$(MAKE) -C $(LFTDIR) $@
	@$(RM) -f $(NAME)
	@echo "${PURPLE}|-> ${RED}$(NAME) deleted${DEFAULT}"

re: fclean all

rc: re
	@make clean

libft:
	@cd libft && make rc

.SILENT: $(OBJ)
.PHONY: all clean fclean re	

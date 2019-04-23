# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/12/11 14:10:56 by vicaster     #+#   ##    ##    #+#        #
#    Updated: 2019/04/12 16:29:30 by vicaster    ###    #+. /#+    ###.fr      #
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
SRC =	src/2_check_analyse.c src/1_ft_printf.c src/main.c src/2_options.c\
		src/tools.c src/3_resolve_printf.c src/4_ft_menu.c src/6_resolve_options.c\
		src/tools2.c src/7_resolve_options2.c src/5_ft_menu2.c src/8_ft_count.c\
		src/tools3.c
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

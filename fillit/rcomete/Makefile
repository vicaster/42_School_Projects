# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vicaster <vicaster@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/11/02 14:52:03 by vicaster     #+#   ##    ##    #+#        #
#    Updated: 2018/11/30 14:27:25 by vicaster    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

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

###########################################################################

NAME = fillit
CC = gcc
CFLAGS = -Wextra -Werror -Wall
SRC = *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) libft/libft.a

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

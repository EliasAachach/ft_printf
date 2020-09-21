# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdavid <mdavid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 19:04:13 by bemoreau          #+#    #+#              #
#    Updated: 2020/07/06 23:10:44 by mdavid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE =	ft_printf.h

INC_PATH = ./includes/

vpath %.c srcs
vpath %.c srcs/utils

FILES =		./srcs/ft_convert_hexa\
			./srcs/ft_nbrlen_hexa\
			./srcs/ft_putmem

SRCS = $(addsuffix .c, $(FILES))
OBJ = $(SRCS:.c=.o)

L_CC = clang
AR =  ar -rc
FLAGS = -Wall -Wextra -Werror

### COLORS ###

NOC = \033[0m
BOLD = \033[1m
UNDERLINE = \033[4m
BLACK = \033[1;30m
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
VIOLET = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m

all: 		$(NAME)

$(NAME): 	$(OBJ)
			@echo "$(CYAN)Constructing library:$(WHITE) $@"
			@$(AR) $(NAME) $(OBJ)
.c.o:		${SRCS}
			@echo " $(VIOLET)[$(L_CC)] $(GREEN)[$(FLAGS)]$(NOC) $(YELLOW)in progress ...:$(NOC) $< $(RED)->$(NOC) $@"
			@$(L_CC) -c -I$(INC_PATH) $< -o ${<:.c=.o}
clean:
	@echo "$(RED)Removing '.o' objects: $(NOC) $@\n"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing executable: $(NOC) $@\n"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean


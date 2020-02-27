# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/28 18:53:51 by bbutterm          #+#    #+#              #
#    Updated: 2019/09/28 18:53:52 by bbutterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
SRCDIR = ./
OBJDIR = ./
HEADDIR = ./
HEADER = -I $(HEADDIR)
SRC = $(patsubst $(SRCDIR)%, %, $(wildcard $(SRCDIR)*.c))

OBJ = $(SRC:.c=.o)

vpath %.c $(SRCDIR)
vpath %.o $(OBJDIR)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

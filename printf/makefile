# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbutterm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/28 18:23:54 by bbutterm          #+#    #+#              #
#    Updated: 2019/09/28 18:23:55 by bbutterm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror -g
ADDFLAGS = -I ../libft/

INC = ft_printf.h double.h

SRC = check_format.c conversion1.c flags.c for_help1.c ft_big_pow.c integral_part.c number.c check_format1.c \
	  double.c flags_for_int.c for_help2.c ft_printf.c lets_work.c unordinary_flags.c conversion.c \
	  double_main.c for_help.c fractional_part.c int_flags.c norme.c work_with_bits.c

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@echo "Making ft_printf..."
	@make --directory ../libft
	@cp ../libft/libft.a ./$(NAME)
	@$(CC) $(FLAGS) -c $(SRC)  -I. ft_printf.h double.h
	@ar rc $@ $(OBJ)
	@ranlib $(NAME)

clean:
	@make clean -C ../libft
	@rm -rf $(OBJ)

fclean: clean
	@make fclean -C ../libft
	@rm -rf $(NAME)

re: fclean all

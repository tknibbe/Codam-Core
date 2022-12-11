# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tknibbe <tknibbe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 10:52:53 by tknibbe           #+#    #+#              #
#    Updated: 2022/11/11 11:48:05 by tknibbe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CCFLAGS = -Werror -Wall -Wextra

SRC = ft_printf.c \
		c_s_u_d_i_conversion.c \
		hex_conversion.c \
		more_functions.c

OBJ = $(SRC)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) -c $(OBJ)
	@ar r $(NAME) $(OBJ:.c=.o)

all: $(NAME)

clean:
	@rm -f $(SRC:.c=.o)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

test:
	gcc printf_test.c libftprintf.a && ./a.out
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mascagli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 11:08:42 by mascagli          #+#    #+#              #
#    Updated: 2018/11/05 13:28:14 by mascagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_strlen.c

OBJ = ft_putstr.o ft_strcmp.o ft_putchar.o ft_swap.o ft_strlen.o

HEADERS = /includes

all: $(NAME)

$(NAME): objects
	ar rc $(NAME) $(OBJ)

objects:
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

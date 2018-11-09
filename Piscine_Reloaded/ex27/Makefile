# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mascagli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 13:52:14 by mascagli          #+#    #+#              #
#    Updated: 2018/11/05 13:52:20 by mascagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc -Wall -Wextra -Werror
SRCS = ./main.c
OBJ = ./main.o

all:objs
	$(CC) -o $(NAME) $(OBJ)

objs:
	$(CC) -c $(SRCS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

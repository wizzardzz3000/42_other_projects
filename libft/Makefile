# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mascagli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 10:36:07 by mascagli          #+#    #+#              #
#    Updated: 2018/11/16 14:45:54 by mascagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_putchar.c  \
	   ./ft_swap.c     \
	   ./ft_putstr.c   \
	   ./ft_strlen.c   \
	   ./ft_strcmp.c   \
	   ./ft_memset.c   \
	   ./ft_memcmp.c   \
	   ./ft_atoi.c     \
	   ./ft_itoa.c     \
	   ./ft_memalloc.c \
	   ./ft_strncpy.c  \
	   ./ft_strcpy.c	\
	   ./ft_strdup.c	\
	   ./ft_isalpha.c	\
	   ./ft_isdigit.c  \
	   ./ft_isalnum.c  \
	   ./ft_isascii.c  \
	   ./ft_isprint.c  \
	   ./ft_toupper.c  \
	   ./ft_tolower.c  \
	   ./ft_strncmp.c	\
	   ./ft_strcat.c	\
	   ./ft_strlcat.c	\
	   ./ft_strncat.c	\
	   ./ft_strstr.c	\
	   ./ft_strnstr.c	\
	   ./ft_bzero.c	\
	   ./ft_memcpy.c	\
	   ./ft_memchr.c	\
	   ./ft_memccpy.c	\
	   ./ft_memmove.c  \
	   ./ft_putnbr.c	\
	   ./ft_strchr.c	\
	   ./ft_memdel.c	\
	   ./ft_strnew.c	\
	   ./ft_strdel.c	\
	   ./ft_strclr.c	\
	   ./ft_striter.c	\
	   ./ft_striteri.c	\
	   ./ft_strmap.c	\
	   ./ft_strmapi.c	\
	   ./ft_strequ.c	\
	   ./ft_strnequ.c	\
	   ./ft_strsub.c	\
	   ./ft_strjoin.c	\
	   ./ft_strtrim.c	\
	   ./ft_strsplit.c	\
	   ./ft_putendl.c	\
	   ./ft_putchar_fd.c	\
	   ./ft_putstr_fd.c	\
	   ./ft_putendl_fd.c	\
	   ./ft_putnbr_fd.c	\
	   ./ft_strrchr.c \
	   ./ft_lstnew.c  \
	   ./ft_lstdelone.c \
	   ./ft_lstdel.c \
	   ./ft_lstadd.c \
	   ./ft_lstiter.c \
	   ./ft_lstmap.c \
	   ./ft_putnbr_base.c \
	   ./ft_is_prime.c \
	   ./ft_sqrt.c \
	   ./ft_strrev.c \
	   ./ft_count_if.c \
	   ./ft_is_sort.c \
	   ./ft_str_is_alpha.c \
	   ./ft_str_is_numeric.c \
	   ./ft_str_is_lowercase.c \
	   ./ft_str_is_uppercase.c \
	   ./ft_str_is_printable.c \
	   ./ft_print_words_tables.c

OBJ = $(SRCS:.c=.o)

CC = gcc -Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(SRCS)
	@ ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kirill <kirill@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/08 23:08:59 by kirill            #+#    #+#              #
#    Updated: 2018/12/18 01:39:16 by kirill           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror -g

RM=rm -f

LDFLAGS=-L.

LDLIBS=-lft

SRC=ft_strcmp.c ft_strncmp.c ft_atoi.c \
ft_isspace.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_strstr.c ft_strnstr.c ft_strchr.c ft_strlen.c \
ft_strrchr.c ft_memcpy.c ft_memccpy.c ft_memset.c ft_bzero.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strcat.c \
ft_strncat.c ft_strlcat.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
ft_strclr.c ft_striter.c ft_striteri.c

OBJ=$(SRC:.c=.o)

$(NAME): libft.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean

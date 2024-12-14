# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 12:42:56 by ilallali          #+#    #+#              #
#    Updated: 2024/12/13 18:19:03 by ilallali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_printhex.c ft_printptr.c ft_putnnbr.c ft_putunsigned.c
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f
AR = ar rc

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
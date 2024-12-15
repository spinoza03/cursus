
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
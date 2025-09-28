NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_itoi.c ft_printf.c ft_putptr.c ft_putstr.c\
	ft_shatha.c ft_tohex.c ft_strlen.c ft_itol.c
OBJ = $(SRC:.c=.o)
RM  = rm -f
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all

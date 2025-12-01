NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = swap.c push.c rotate.c reverse_rotate.c
OBJ = $(SRC:.c=.o)

INCLUDE = push_swap.h

.PHONY: all clean fclean re 

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

AR = ar
FLAGS = rcs

SRC_DIR = srcs
INC_DIR = includes

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(SRCS:%.c=srcs/%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(FLAGS) $@ $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

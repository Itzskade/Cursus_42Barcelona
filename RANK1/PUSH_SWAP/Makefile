NAME    = push_swap
SRCS    = swap.c push.c rotate.c reverse_rotate.c ft_split.c parse.c utils.c small.c radix.c push_swap.c 
OBJS    = $(SRCS:.c=.o)
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

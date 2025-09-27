CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_display_file.c
NAME = ft_display_file

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

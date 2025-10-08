.PHONY: all clean fclean re 

CC 		:= cc
CFLAGS 	:= -Wall -Werror -Wextra
AR 		:= ar
ARFLAGS	:= rcs

SRC 	:= ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJ		:= $(SRC:.c=.o)

NAME 	:= libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

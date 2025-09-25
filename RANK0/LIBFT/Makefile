NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = libft.h
AR = ar
ARFLAGS = rcs

SRC =	ft_atoi.c \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_bzero.c ft_calloc.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strrchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_tolower.c ft_toupper.c \
	ft_itoa.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)

# ASCII Art
ASCII: $(NAME) 
	@echo "\033[1;31m  _      \033[1;33m ___  \033[1;32m ____   \033[1;34m _____  \033[1;35m _____  \033[0m\n\
\033[1;31m | |     \033[1;33m|_ _| \033[1;32m| __ )  \033[1;34m|  ___| \033[1;35m|_   _| \033[0m\n\
\033[1;31m | |     \033[1;33m | |  \033[1;32m|  _ \  \033[1;34m| |__    \033[1;35m | |   \033[0m\n\
\033[1;31m | |___  \033[1;33m | |  \033[1;32m| |_) | \033[1;34m|  __|   \033[1;35m | |   \033[0m\n\
\033[1;31m |_____| \033[1;33m|___| \033[1;32m|____/  \033[1;34m|_|      \033[1;35m |_|   \033[0m\n\
	       \033[1;36m    S   K   A   D   E\033[0m\n"

# Regla para compilar .c a .o
%.o: %.c $(INCLUDES) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;32m[✓] Compilado:\033[0m \033[1;34m$< \033[1;31m→ \033[0m\033[1;35m$@\033[0m"

# Regla principal
all: $(NAME) ASCII

# Crear librería
$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@echo "Librería \033[4;31m$(NAME)\033[0m creada."

# Bonus
bonus: $(OBJ_BONUS) ASCII
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS)
	@echo "Bonus añadidos a \033[4;31m$(NAME)\033[0m."

# Limpiar .o
clean:
	@rm -rf $(OBJ) $(OBJ_BONUS)
	@echo "Todos los archivos \033[1;36m.o\033[0m eliminados"

# Limpiar todo
fclean: clean
	@rm -f $(NAME)

# Rehacer todo
re: fclean all

.PHONY: all clean fclean re ASCII

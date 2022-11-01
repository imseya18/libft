NAME = libft.a

SOURCES =   ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_memset.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_strrchr.c \
			ft_toupper.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strchr.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_tolower.c \
			ft_strnstr.c

OBJECTS = $(SOURCES:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = cc $(FLAGS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
CC = cc
CFLAGS = -Wall -Werror -Wextra -c

SRCS = srcs
HEADER_FILE = includes

NAME = libft.a
SOURCES = $(SRCS)/ft_putchar.c $(SRCS)/ft_putstr.c $(SRCS)/ft_strcmp.c $(SRCS)/ft_strlen.c $(SRCS)/ft_swap.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(HEADER_FILE)

$(NAME): $(OBJECTS)
	ar cr $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
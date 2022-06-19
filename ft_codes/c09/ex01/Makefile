CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = includes

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $@ $^

.c.o :
	gcc $(CFLAGS) -c -I $(INCLUDES) $< -o $(<:.c=.o)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

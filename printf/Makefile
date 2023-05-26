NAME = libftprintf.a

SOURCES = src/ft_printf.c src/printf_print.c src/print_hexa.c

all: $(NAME)

$(NAME):
	cc -c -Wall -Wextra -Werror $(SOURCES)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
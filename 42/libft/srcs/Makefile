NAME = libft.a
RULES = -Wall -Wextra -Werror
DEBUG = -g

all: $(NAME)

$(NAME):
	gcc $(DEBUG) -I ./ -c $(RULES) *.c
	ar rc $(NAME) *.o 
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

debug: fclean
	make

re: fclean
	make all

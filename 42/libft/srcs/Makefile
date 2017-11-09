NAME = libft.a
RULES = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(RULES) *.c
	ar rc $(NAME) *.o 
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean
	make all
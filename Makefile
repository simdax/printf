NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean
	make all
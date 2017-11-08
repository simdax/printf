SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC_DIR = srcs/
C = $(addprefix $(SRC_DIR), $(SRCS))
INCLUDES = includes/
TARGET = libft.a

all:
	gcc -c -I$(INCLUDES) $(C)
	ar rc $(TARGET) *.o
	ranlib $(TARGET)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean
	make all

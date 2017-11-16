NAME = get_next_line

FLAGS = -g -Wall -Werror -Wextra
FILES = get_next_line.c 
OBJS = $(FILES:%.c=%.o)
INCLUDES = ~/42/srcs
CC = gcc

all: $(NAME)

$(OBJS): $(FILES)
	$(CC) -c -I $(INCLUDES) $(FLAGS) $(FILES)

$(NAME): $(OBJS)
	$(CC) -lft $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

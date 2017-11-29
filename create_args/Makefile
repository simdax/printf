NAME = args
FILES = main.c print.c all_itoas.c
CC = gcc -g
TESTS = `cat t-db`

all:
	$(CC) $(FILES) -lft -I ../includes/ -I $(HOME)/42/srcs -o $(NAME)

test:
	sh tests.t

debug:
	lldb $(NAME) $(TESTS)

#  ╓─────[ Target ]─  
#  ╙───────────────────── ─ ─ 
NAME := parser

#  ╓─────[ Compiler ]─  
#  ╙───────────────────── ─ ─ 
CC := gcc
CCFLAGS := #-Wall -Werror -Wextra -g
LDFLAGS := ../libft/libft.a

#────[ Functions ]─  
#  ╙───────────────────── ─ ─

SRC := main.c parser.c 
INC := $(addprefix -I, includes ../libft)
OBJ := $(SRC:.c=.o)

vpath %.c srcs/

#  ╓─────[ Procedures ]─  
#  ╙───────────────────── ─ ─
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(CCFLAGS) $(LDFLAGS) -o $(NAME)
	@echo "\n\033[0;32m [OK] \033[0m \033[0;33m Linking binary:\033[0m " $(NAME)

%.o : %.c
	@echo "\033[0;32m [OK] \033[0m \033[0;33m Compiling:\033[0m " $@
	$(CC) $(CCFLAGS) $(INC)  -c -o $@ $<

clean:
	@/bin/rm -Rf $(OBJ)
	@/bin/rm -rf $(OBJSPATH)

fclean: clean
	@rm -f $(NAME)
	@echo  "\033[0;31m [✗] \033[0m \033[0;33m Removed last build: \033[0m " $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

lib:
	@make -C $(LIBFT)

test: all
	cd tests && ./main

prod:
	make CCFLAGS= -Wall -Wextra -Werror re

debug:
	make CCFLAGS=-g re 
	lldb $(NAME) '#0 '	

#  ╓─────[ Call me maybe ]─  
#  ╙───────────────────── ─ ─ 
.PHONY: all lib clean fclean re

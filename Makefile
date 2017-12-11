#  ╓─────[ Target ]─  
#  ╙───────────────────── ─ ─ 
NAME := _dir_

#  ╓─────[ Compiler ]─  
#  ╙───────────────────── ─ ─ 
CC := gcc
CCFLAGS := 
LDFLAGS := libft/libft.a

#────[ Functions ]─  
#  ╙───────────────────── ─ ─

SRC := _files_
INC := $(addprefix -I, _includes_)
OBJ := $(SRC:.c=.o)

vpath %.c srcs/

#  ╓─────[ Procedures ]─  
#  ╙───────────────────── ─ ─
all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n\033[0;32m [OK] \033[0m \033[0;33m Linking binary:\033[0m " $(NAME)
	$(CC) main.c $(INC)
	@$(CC) main.o $(OBJ) $(CCFLAGS) $(LDFLAGS) -o $(NAME)


%.o : %.c
	@echo "\033[0;32m [OK] \033[0m \033[0;33m Compiling:\033[0m " $@
	@$(CC) $(CCFLAGS) $(INC)  -c -o $@ $<

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
	ar -rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

debug:
	make CCFLAGS=-g re
	lldb $(NAME)

prod:
	make CCFLAGS="-Wall -Wextra -Werror" re

test:
	cd tests && ./main

commit: test
	git commit -am "passés les tests"

#  ╓─────[ Call me maybe ]─  
#  ╙───────────────────── ─ ─ 
.PHONY: all lib clean fclean re

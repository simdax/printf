#  ╓─────[ Target ]─  
#  ╙───────────────────── ─ ─ 
NAME = printf

#  ╓─────[ Compiler ]─  
#  ╙───────────────────── ─ ─ 
CC = gcc
CCFLAGS = -Wall -Werror -Wextra -g
LDFLAGS = libft/libft.a

#  ╓─────[ Functions ]─  
#  ╙───────────────────── ─ ─

SRC = ft_printf.c parser/parser.a create_args/create_args.a
INC = $(addprefix -I, libft includes)
OBJ = $(SRC:.c=.o)

vpath %.c srcs/

#  ╓─────[ Procedures ]─  
#  ╙───────────────────── ─ ─
all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n\033[0;32m [OK] \033[0m \033[0;33m Linking binary:\033[0m " $(NAME)
	$(CC) $(INC) main.c -c -g
	@$(CC) main.o $(OBJ) $(CCFLAGS) $(LDFLAGS) -o $(NAME)

%.a :
	make -C parser lib
	make -C create_args lib

%.o : %.c
	@echo "\033[0;32m [OK] \033[0m \033[0;33m Compiling:\033[0m " $@
	@echo	@$(CC) $(CCFLAGS) $(INC)  -c -o $@ $<
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
	@make -C $(LIBFT)

#  ╓─────[ Call me maybe ]─  
#  ╙───────────────────── ─ ─ 
.PHONY: all lib clean fclean re

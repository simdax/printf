#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scornaz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 15:24:59 by scornaz           #+#    #+#              #
#    Updated: 2017/08/17 20:59:52 by scornaz          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CS :=		ft_atoi.c main.c
SRCS :=		$(addprefix srcs/, $(CS))
OBJS_DIR =	objs
NAME  :=	ft_tail
FLAGS := 	-W -Werror -Wextra -Wall

all:
	@mkdir -p $(OBJS_DIR)
	@cc $(FLAGS) $(SRCS) -c 
	@mv *.o $(OBJS_DIR)
	@cc $(OBJS_DIR)/*.o -o $(NAME)

soft:
	@mkdir -p $(OBJS_DIR)
	@cc $(SRCS) -c 
	@mv *.o $(OBJS_DIR)
	@cc $(OBJS_DIR)/*.o -o $(NAME)


clean:
	@rm $(OBJS_DIR)/*.o

fclean: clean
	@rm $(NAME)
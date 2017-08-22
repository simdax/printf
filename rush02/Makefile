#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scornaz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 11:21:19 by scornaz           #+#    #+#              #
#    Updated: 2017/08/19 15:37:09 by scornaz          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =	colle02
CS 	 =	main.c stdin.c diff.c ft_split.c ft_strcat.c
SRCS =	$(addprefix srcs/, $(CS))
OS = 	$(CS:.c=.o)
OBJS =	$(addprefix objs/, $(OS))

all:
	mkdir -p srcs objs
	cc -c $(SRCS)
	mv $(OS) objs
	cc $(OBJS) -o $(NAME)
fclean:
	rm $(OBJS)
clean: fclean
	rm $(NAME)
re:	clean all
test:
	@cc tests/$(arg).c srcs/$(arg).c srcs/ft_split.c srcs/ft_strcat.c -o $(arg)
	@mv $(arg) tests
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scornaz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/18 09:09:57 by scornaz           #+#    #+#              #
#    Updated: 2017/08/18 09:45:19 by scornaz          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CS =	main.c ft_print_memory.c ft_putchar.c
SRCS = 	$(addprefix srcs/, $(CS))
NAME =	ft_hexdump

all:
	@cc -c $(SRCS)
	@cc *o -o $(NAME)

fclean:
	@clean
	@rm *o

clean: fclean
	@rm $(NAME)

re: clean all

dev:
	while true; do \
		clear ; \
		make all ; \
		sleep 1 ; \
	done	
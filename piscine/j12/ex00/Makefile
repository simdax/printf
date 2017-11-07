#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scornaz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 15:24:59 by scornaz           #+#    #+#              #
#    Updated: 2017/08/17 20:04:39 by scornaz          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAGS := -W -Wall -Werror -Wextra
NAME := ft_cat
OBJS_DIR := 

all: 
	@cc $(FLAGS) srcs/*.c -c 
	@mv *.o srcs
	@cc srcs/*.o -o $(NAME)

clean:
	@rm srcs/*o

fclean: clean
	@rm main
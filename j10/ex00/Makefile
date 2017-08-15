#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scornaz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/15 08:30:22 by scornaz           #+#    #+#              #
#    Updated: 2017/08/15 08:56:09 by scornaz          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS_DIR	=	srcs
SRCS		=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
CS			=	$(addprefix $(SRCS_DIR)/, $(SRCS))
OBJECTS		=	$(CS:.c=.o)
NAME		=	test
CFLAGS		+=	-W -Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:
				cc -c $(OBJECTS) -o $(NAME)

clean		:
				rm $(OBJECTS)

fclean		:	clean
				rm -f $(NAME)

re			: 	fclean all
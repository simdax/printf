#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scornaz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/15 08:30:22 by scornaz           #+#    #+#              #
#    Updated: 2017/08/22 15:35:11 by scornaz          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS_DIR	=	srcs
SRCS		=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
CS			=	$(addprefix $(SRCS_DIR)/, $(SRCS))
OBJECTS		=	$(CS:.c=.o)
NAME		=	libft.a
CFLAGS		=	-W -Wall -Wextra -Werror

all			:
				cc -c -Iincludes $(CS)
				ar rc $(OBJECTS) $(NAME)
				ranlib $(NAME)

clean		:
				rm $(OBJECTS)

fclean		:	clean
				rm -f $(NAME)

re			: 	fclean all
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:34:58 by jtoty             #+#    #+#             */
/*   Updated: 2017/11/11 19:05:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "srcs/libft.h"

void	ft_print_result(char **s)
{
	while (*s)
		printf("%s ", *s++);
	printf("\n");
}

int		main(int argc, const char *argv[])
{
	ft_putnbr(510);
	return (0);
}

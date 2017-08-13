/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:58:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 17:31:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_mat(char **mat)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			printf("%c", mat[i][j]);
			write(1, &(mat[i][j]), 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char	**copy_from(char **src)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	dest = malloc(sizeof(char*) * 10);
	while (i < 9)
	{
		j = 0;
		dest[i] = malloc(sizeof(char) * 10);
		while (j < 9)
		{
			dest[i][j] = src[i + 1][j];
			j++;
		}
		dest[i][9] = '\0';
		i++;
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	char	**mat;
	int		solutions;

	(void)argc;
	solutions = 0;
	mat = copy_from(argv);
	resolve(mat, 0, 0, &solutions);
	if (solutions == 1)
	{
		print_mat(mat);
	}
	else
		write(1, "Erreur", 10);
	return (0);
}

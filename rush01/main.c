/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:58:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 17:02:13 by scornaz          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**mat;
	int		solutions;

	(void)argc;
	(void)solutions;
	i = 0;
	mat = malloc(sizeof(char*) * 10);
	while (i < 9)
	{
		j = 0;
		mat[i] = malloc(sizeof(char) * 10);
		while (j < 9)
		{
			mat[i][j] = argv[i + 1][j];
			j++;
		}
		mat[i][9] = '\0';
		i++;
	}
	printf("%s\n", mat[0]);
		
//	mat[9] = NULL;
//	print_mat(mat);
/* 	resolve(mat, 0, 0, &solutions); */
/* 	if (solutions == 1) */
/* 	{ */
/* 		print_mat(mat); */
/* 	} */
/* 	else */
/* 		write(1, "Erreur", 10); */
	return (0);
}

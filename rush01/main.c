/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:58:53 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 19:35:47 by scornaz          ###   ########.fr       */
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
	char	**mat;
	char	**sol;
	int		solutions;

	sol = NULL;
	solutions = 0;
	if (argc > 10 || !check_input(argv))
	{
		write(1, ERR, LEN_ERR);
		return (0);
	}
	else
	{
		mat = copy_from(argv, 1);
		resolve(mat, 0, &solutions, &sol);
		if (solutions == 1)
		{
			print_mat(sol);
		}
		else
			write(1, ERR, LEN_ERR);
		return (1);
	}
}

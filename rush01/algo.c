/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 07:33:38 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		is_line_ok(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
			return (0);
		i++;
	}
	return (1);
}

int		check(char mat[9][9], int row, int col, int nb)
{
	int i;
	//int j;

	i = 0;
	while (i < 9)
	{
		if (i != col && (mat[row][i]) == nb + 48)
			if (i != row && (mat[i][col]) == nb + 48)
				return (0);
		i++;
	}
/* 	i = row / 3; */
/* 	while (i < row / 3 + 3) */
/* 	{ */
/* 		j = col / 3; */
/* 		while (j < col / 3 + 3) */
/* 		{ */
/* 			if (i != nb && (mat[row][i] == nb + 48 || mat[i][col] == nb + 48)) */
/* 				return (0); */
/* 			j++; */
/* 		} */
/* 		i++; */
/* 	} */
	return (nb);
}

int		resolve(char mat[9][9], int row, int col)
{
	int i;

	i = 1;
//	printf("fdfs%d", col);
	while (i < 10)
	{
		if (is_line_ok(mat[row]) && row == 8)
		{
			write(1, "OK!", 3);
			return (1);
		}
		else
		{
			if (mat[row][col] == '.')
			{
				mat[row][col] = check(mat, row, col, i);
				if (mat[row][col])
				{
					if (col == 8)
					{
						if (!resolve(mat, row + 1, 0))
							mat[row][col] = '.';
					}
					else
					{
						if (!resolve(mat, row, col + 1))
							mat[row][col] = '.';
					}
				}
				else
					mat[row][col] = '.';
			}
		}
		i++;
	}
	return (0);
}

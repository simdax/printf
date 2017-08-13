/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 18:50:41 by scornaz          ###   ########.fr       */
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

char	check(char **mat, int pos, int row, int col, int nb)
{
	int i;
	int j;
	int r;
	int c;
	
	r = pos / 9;
	c = pos % 9;
	(void)row;
	(void)col;	
	i = 0;
	while (i < 9)
	{
		if (i != c && (mat[r][i]) == nb + 48)
			return ('.');
		if (i != r && (mat[i][c]) == nb + 48)
			return ('.');
		i++;
	}
	i = (r / 3) * 3;
	while (i < ((r / 3) * 3) + 3)
	{
		j = (c / 3) * 3;
		while (j < ((c / 3) * 3) + 3)
		{
			if (i != r && j != c && (mat[i][j]) == nb + 48)
				return ('.');
			j++;
		}
		i++;
	}
	return (nb + 48);
}

int		test(char **mat, int pos, int row, int col, int *solutions, char ***sol)
{
	int i;
	int r;
	int c;
	
	r = pos / 9;
	c = pos % 9;
	(void)row;
	(void)col;
	i = 1;
	while (i < 10)
	{
		if (mat[r][c] == '.')
		{
			mat[r][c] = check(mat, pos, r, c, i);
			if (mat[r][c] != '.')
			{
				resolve(mat, pos + 1, r, c + 1, solutions, sol);
				if (*solutions < 2)
					mat[r][c] = '.';
				else
					return (0);
			}
		}
		else
			return (resolve(mat, pos + 1, r, c + 1, solutions, sol));
		i++;
	}
	return (0);
}

int		resolve(char **mat, int pos, int row, int col, int *solutions, char ***sol)
{
	int r;
	int c;

	r = pos / 9;
	c = pos % 9;

	if (pos == 81)
	{
		*(solutions) += 1;
		if (*solutions == 1)
		{
			*sol = copy_from(mat, 0);
		}
		return (1);
	}
	else
		return (test(mat, pos, row, col, solutions, sol));
}

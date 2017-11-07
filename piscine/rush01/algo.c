/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 21:09:11 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	check(char **mat, int pos, int nb)
{
	int i;
	int r;
	int c;

	r = pos / 9;
	c = pos % 9;
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
	if (check_square(mat, r, c, nb))
		return ('.');
	return (nb + 48);
}

int		test(char **mat, int pos, int *solutions, char ***sol)
{
	int i;
	int r;
	int c;

	r = pos / 9;
	c = pos % 9;
	i = 1;
	while (i < 10)
	{
		if (mat[r][c] == '.')
		{
			if ((mat[r][c] = check(mat, pos, i)) != '.')
			{
				resolve(mat, pos + 1, solutions, sol);
				if (*solutions < 2)
					mat[r][c] = '.';
				else
					return (0);
			}
		}
		else
		{
			if ((mat[r][c] = check(mat, pos, i)) != '.')
				return (resolve(mat, pos + 1, solutions, sol));
			else
				exit(-1);
		}
		i++;
	}
	return (0);
}

int		resolve(char **mat, int pos, int *solutions, char ***sol)
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
		return (test(mat, pos, solutions, sol));
}

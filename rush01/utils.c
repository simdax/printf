/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:37:30 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 20:58:52 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		check_input(char **argv)
{
	int 	len;

	argv++;
	while (*argv)
	{
		len = 0;
		while ((*argv)[len])
		{
			if ((*argv)[len] < '0' || '9' < (*argv)[len])
			{
				if ((*argv)[len] != '.')
					return (0);
			}
			len++;
		}
		if (len > 9)
			return (0);
		argv++;
	}
	return (1);
}

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

char	**copy_from(char **src, int incr)
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
			dest[i][j] = src[i + incr][j];
			j++;
		}
		dest[i][9] = '\0';
		i++;
	}
	dest[9] = NULL;
	return (dest);
}

int		check_square(char **mat, int r, int c, int nb)
{
	int i;
	int j;

	i = (r / 3) * 3;
	while (i < ((r / 3) * 3) + 3)
	{
		j = (c / 3) * 3;
		while (j < ((c / 3) * 3) + 3)
		{
			if (i != r && j != c && (mat[i][j]) == nb + 48)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
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
			return (resolve(mat, pos + 1, solutions, sol));
		i++;
	}
	return (0);
}

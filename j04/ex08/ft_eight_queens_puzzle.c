/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:14 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 14:57:52 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	p_mat(int tab[8][8], int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("%d ", tab[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	printf("\n");
}

void	update_mat(int tab[8][8], int x, int y, int increment)
{
	int i;

	i = 0;
	while (i < 8)
		tab[x][i++] += increment;
	i = 0;
	while (i < 8)
		tab[i++][y] += increment;
	tab[x][y] -= increment;
	i = 0;
	while (x + ++i < 8 && y + i < 8)
		tab[x + i][y + i] += increment;
	i = 0;
	while (x - ++i >= 0 && y + i < 8)
		tab[x - i][y + i] += increment;
	i = 0;
	while (x - ++i >= 0 && y - i >= 0)
		tab[x - i][y - i] += increment;
	i = 0;
	while (x + ++i < 8 && y - i >= 0)
		tab[x + i][y - i] += increment;
}

int		put_queen(int tab[8][8], int col)
{
	int i;
	int solution;

	while (i < 8)
	{
		if(tab[i][col] == 0)
		{
			update_mat(tab, i, col, 1);
			solution = put_queen(tab, col + i);
			if (!solution) 
				update_mat(tab, i, col, -1);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	int size;
	int i;
	int j;
	int tab[8][8];

	size = 8;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}

	update_mat(tab, 7, 7, 1);
	p_mat(tab, 8);
	update_mat(tab, 0, 0, 1);
	p_mat(tab, 8);

	return (0);
}

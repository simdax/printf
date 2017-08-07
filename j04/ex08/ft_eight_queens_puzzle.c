/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:14 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 15:13:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	p_mat(tab, 8);
}

int		put_queen(int tab[8][8], int col, int *solutions)
{
	int i;
	int solution;

	while (i < 8)
	{
		if (tab[i][col] == 0)
		{
			if (col == 7)
			{
				(*solutions)++;
			}
			else
			{
				update_mat(tab, i, col, 1);
				if (!put_queen(tab, col + 1, solutions))
					update_mat(tab, i, col, -1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_eight_queens_puzzle(void)
{
	int solutions;
	int i;
	int j;
	int tab[8][8];

	solutions = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (solutions);
}

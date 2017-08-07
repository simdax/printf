/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:14 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 12:13:33 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			printf("%d", tab[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	printf("\n");
}

void	update_mat(int tab[8][8], int x, int y)
{
	int i;

	i = 0;
	while (x + i++ < 8 && y + i < 8)
		tab[x + i][y + i] = 0;
	i = 0;
	while (x - i++ >= 0 && y + i < 8)
		tab[x - i][y + i] = 0;
	i = 0;
	while (x - i++ >= 0 && y - i >= 0)
		tab[x - i][y - i] = 0;
	i = 0;
	while (x + i++ < 8 && y - i >= 0)
		tab[x + i][y - i] = 0;
	p_mat(tab, 8);
}

int		check_row(int tab[8][8], int col)
{
	int i;

	i = -1;
	while (i < 8)
	{
		if (tab[col][i++])
			return (1);
	}
	return (0);
}

int		put_queen(int tab[8][8], int x, int y)
{
	int i;

	if (check_row(tab, x))
	{
		if (x == 7)
			return (1);
		else
		{
			i = 0;
			while (i < 8)
			{
				if (tab[x][y])
				{
					tab[x][y] = 0;
					update_mat(tab, x + i, y);
					put_queen(tab, x + i, y + 1);
				}
				else
					return (0);
				i++;
			}
		}
	}
	else
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
			tab[i][j] = 1;
			j++;
		}
		i++;
	}
	i = 0;
	printf("asdfasdf%d", put_queen(tab, 0, 0));
	return (0);
}

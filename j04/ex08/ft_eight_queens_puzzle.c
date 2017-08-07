/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:14 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 10:57:25 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_queen(int tab[8][8], int x, int y)
{
	tab[x][y] = 1;
	p_mat(tab);
}

void	p_mat(int tab[8][8])
{
	int i;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("%d", tab[i][j]);
			j++;
		}
		i++;
	}
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
	put_queen(tab, 1, 2);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allPerm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:33:39 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 16:21:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	swap(char *x, char *y)
{
	char	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	print(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		check(char *str, int col)
{
	int		i;
	int		dist;

	if (col == 8)
		return (1);
	i = 0;
	while (i < 8)
	{
		if (i != col)
		{
			if (col > i)
				dist = col - i;
			else
				dist = i - col;
			if (str[col] - dist == str[i] || str[col] + dist == str[i])
				return (0);
		}
		i++;
	}
	return (check(str, col + 1));
}

void	permute(char *a, int l, int r)
{
	int		i;

	if (l == r && check(a, 0))
		print(a);
	else
	{
		i = l;
		while (i <= r)
		{
			swap((a + l), (a + i));
			permute(a, l + 1, r);
			swap((a + l), (a + i));
			i++;
		}
	}
}

void	ft_eigth_queens_puzzle_2(void)
{
	char	str[9];
	int		i;

	i = 0;
	while (i < 8)
	{
		str[i] = i + 49;
		i++;
	}
	str[8] = '\0';
	permute(str, 0, 7);
}

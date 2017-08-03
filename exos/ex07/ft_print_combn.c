/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:42 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 14:28:47 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int *table, int total)
{
	int i;

	i = 0;
	while (i <= total)
	{
		ft_putchar(table[i]);
		i++;
	}
	if (table[0] != 57 - total)
	{
		ft_putchar(',');
	}
}

void	f(int index, int niveau, int *table, int offset)
{
	int i;
	int to;

	i = 0;
	to = 10 - niveau;
	table[index] += offset;
	while (i <= to - offset)
	{
		if (niveau > 1)
		{
			f(index + 1, niveau - 1, table, i + (1 + offset));
		}
		else
		{
			print(table, index);
		}
		table[index]++;
		i++;
	}
	table[index] = 48;
}

void	ft_print_combn(int n)
{
	int table[10];
	int i;

	i = 0;
	while (i < 10)
	{
		table[i] = 48;
		i++;
	}
	f(0, n, table, 0);
}

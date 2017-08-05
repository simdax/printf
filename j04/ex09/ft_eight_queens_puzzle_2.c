/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:07:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/04 15:31:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int q[64];
int queenCol;
int c;
int n = 8;

void print_queens();
int is_consistent(int);
void enumerate(int c);

int ft_eight_queens_puzzle_2()
{
	enumerate(0);
	return (0);
}

void enumerate(int c)
{
	int i;
	if (c == n)
		print_queens();
	else
	{
		for (i = 0; i < n; i++)
		{
			queenCol = i;
			printf("%d", queenCol);
			if (is_consistent(c))
				enumerate(c+1);
			else
			{
				enumerate(c - 1);
				break;
			}
		}
	}
}

void print_queens()
{
	static int count=1;
	int i;
	int j;
	printf("Combination %d\n",count++);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (q[i] == j)
				printf("Q ");
			else
				printf("* ");
		printf("\n");
	}
	printf("\n\n");
}

int is_consistent(int c)
{
	int i;
	for (i = 0; i < c; i++)
	{
		if (q[i] == queenCol)
			return 0;   // same column
		if ((q[i] - queenCol) == (c - i))
			return 0;   // same major diagonal
		if ((queenCol - q[i]) == (c - i))
			return 0;   // same minor diagonal
	}
	return 1;
}

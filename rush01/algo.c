/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:47:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/12 13:27:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		calc_sum(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if ('1' <= *str && *str <= '9')
			i += *str - 48;
		str++;
	}
	return (i);
}

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

int		resolve(char mat[10][10], int row, int col)
{
	int i;

	i = 0;
/* 	while (i < 9) */
/* 	{ */
	if (is_line_ok(mat[row]) && row == 8)
	{
		printf("OK!");
		return (1);
	}
	else {
		if (mat[row][col] == '.')
		{
			mat[row][col] = i + 48;
		}
		if (col == 8)
			resolve(mat, row + 1, 0);
		else
			resolve(mat, row, col + 1);
	}
//		i++;
		//}
	return (0);
}

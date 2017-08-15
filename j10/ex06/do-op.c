/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:08:34 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 11:47:28 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "header.h" 


calc_func parse(char const *op)
{
	int i;
	t_op tab[] = {
		{"+", &ft_add},
		{"-", &ft_sub},
		{"*", &ft_mul},
		{"/", &ft_div},
		{"%", &ft_mod}
	};
	i = 0;
	while (i < 5)
	{
		if (tab[i].label == op)
			return (tab[i].func);
		i++;
	}
	return (NULL);
}

void	calc(int i, int j, calc_func f)
{
	(void)f;
	printf("%d", parse("+")(i, j));
}

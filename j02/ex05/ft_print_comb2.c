/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:22 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 14:21:35 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_number(int n)
{
	int remainder;
	int divided;

	if (n > (48 + 9))
	{
		remainder = (n - 48) % 10;
		divided = (n - 48) / 10;
		ft_putchar(divided + 48);
		ft_putchar(remainder + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(n);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 48;
	while (i < (48 + 99))
	{
		j = i + 1;
		while (j < (48 + 100))
		{
			print_number(i);
			ft_putchar(' ');
			print_number(j);
			if (i != 48 + 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:11 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/03 12:41:46 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	print_sep(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i < (48 + 8))
	{
		j = i + 1;
		while (j < (48 + 9))
		{
			k = j + 1;
			while (k < (48 + 10))
			{
				print(i, j, k);
				if (i != (48 + 7))
				{
					print_sep();
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

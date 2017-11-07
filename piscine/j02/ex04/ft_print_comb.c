/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:21:11 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 14:12:09 by scornaz          ###   ########.fr       */
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

	i = '0';
	while (i <= ('7'))
	{
		j = i + 1;
		while (j <= ('8'))
		{
			k = j + 1;
			while (k <= ('9'))
			{
				print(i, j, k);
				if (i != ('7'))
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

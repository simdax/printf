/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 20:59:48 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		power_of(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * powerOf(nb, power - 1));
}

int		ft_sqrt(int base, int nb)
{
	int i;
	int pow;

	i = 1;
	while (i < 46341)
	{
		pow = power_of(base, i);
		if (nb < pow)
			return (i);
		else if (nb == pow)
			return (i);
		else
			i++;
	}
	return (i);
}

char	*create_string(int size)
{
	char *str[size + 1];

	return (str);
}

void ft_putnbr_base(int nbr, char *base)
{
	int		result_length;
	char	*result;
	int		i;
	int		j;

	i = 0;
	while(base[i])
		i++;
	printf("%d", ft_sqrt(base, i));
	result = create_string(ft_sqrt(base, i));
	printf("%d\n", strlen(result));
	i = 0;
	j = 0;
 	while( < length)
	{
		result[j] = base{}
		if(i == length)
		{
			j++;
			i = 0;
		}
	}
	printf("%s", result);

}

void main(void)
{
	ft_putnbr_base(42, '42');
}

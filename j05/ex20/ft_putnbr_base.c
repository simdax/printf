/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 20:41:20 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int powerOf(int nb, int power)
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
		pow = powerOf(base, i);
		if (nb < pow)
			return (i);
		else if (nb == pow)
			return (i);
		else
			i++;
	}
	return (i);
}

char	*createString(int size)
{
	char *str[size];
	
	return (str);
}

void main()
{
	int length;
	int base;
	char *result;

	base = 5;
	length = 20;
	result = createString(ft_sqrt(base, length));
	result[0] = 'a';
	result[1] = 'b';
	printf("%s", result);
/* 	while(*base) */
/* 		length++; */
/* 	i = 0; */
/* 	while (i < length) */
		
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:06:55 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/09 12:12:45 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char	*res;
	int		dizaine;

	res = (char*)malloc(100);
	res = res + 100;
	dizaine = 1;
	while (n / dizaine > 0)
	{
		*res = '0' + n % dizaine;
		dizaine *= 10;
	}
	if (n < 0)
		*(--res) = '-';
	return (res);
}

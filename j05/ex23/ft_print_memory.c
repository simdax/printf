/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:01:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 14:29:12 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		power_of(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * power_of(nb, power - 1));
}

void	ft_putnbr_base(int nb, char *base, int result_length)
{
	int		length_base;
	char	*result;
	int		pow;

	length_base = 0;
	while (base[length_base])
		length_base++;
	if (length_base > 1)
	{
		while (result_length > 0)
		{
			pow = power_of(length_base, result_length - 1);
			ft_putchar(base[nb / pow]);
			nb = nb % pow;
			result_length--;
		}
	}
}

void	print_non_printable(char c)
{
	if (0 >= c || c < 32)
		ft_putchar('.');
	else
		ft_putchar(c);
}

void	print(int *counter, int len, void *addr)
{
	int plus_seize;

	plus_seize = (*counter + len);
	while (*counter < plus_seize)
	{
		ft_putnbr_base(*(char *)addr, "0123456789abcdef", 2);
		if (*counter % 2 == 1)
			ft_putchar(' ');
		addr++;
		(*counter)++;
	}
	addr -= len;
	(*counter) -= len;
	ft_putchar(' ');
	plus_seize = (*counter + len);
	while (*counter < plus_seize)
	{
		print_non_printable(*(char *)addr);
		addr++;
		(*counter)++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr_base(i, "0123456789abcdef", 8);
		ft_putchar(':');
		ft_putchar(' ');
		print(&i, 16, addr);
		ft_putchar('\n');
		addr += 16;
	}
	return (addr);
}

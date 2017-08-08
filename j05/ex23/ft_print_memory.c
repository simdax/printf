/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:01:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 12:14:22 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(*addr);
		ft_putchar('\n');
		addr++;
		i++;
	}
	return (addr);
}

void	main(void)
{
	ft_print_memory("coucou", 16);
}

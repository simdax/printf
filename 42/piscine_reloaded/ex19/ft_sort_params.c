/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:51:32 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 21:16:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		;
	return *s2 - *s1;
}

void	sort(char **tab)
{
	int 	i;
	char	*swap

	i = 0;
	while (tab[i])
	{
		if (ft_strcmp(tab[i], tab[i + 1]))
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
	}
}

int 	main(int argc, char **argv)
{
	if(argc > 1)
	{
		sort(argv);
		while (*argv)
			print(*argv++);
	}
}

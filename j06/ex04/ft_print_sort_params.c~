/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sort_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:30:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/10 15:37:29 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int		sort_word(char *w1, char *w2)
{
	if (*w1 < *w2)
		return (0);
	else if (*w1 > *w2)
		return (1);
	else
		return (sort_word(++w1, ++w2));
}

void	swap(char **str1, char **str2)
{
	char *tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	sort(char *argv[], int size)
{
	int i;
	int j;

	j = 0;
	i = 0;
 	while (j < size - 1) 
 	{
 		i = size - 2;
		while (i >= j)
		{
			if (sort_word(argv[i], argv[i + 1]))
				swap(&argv[i], &argv[i + 1]);
			i--;
		}
 		j++; 
 	} 
}

int		main(int argc, char **argv)
{
	sort(++argv, --argc);
	while (*argv)
	{
		while(**argv)
			ft_putchar(*(*argv)++);
		ft_putchar('\n');
		argv++;
	}
	return (0);
}

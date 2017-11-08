/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:46:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/08 12:36:35 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char *c)
{
	while (*c)
		ft_putchar(*c++);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		while (*argv)
			print(*argv++);
	}
}

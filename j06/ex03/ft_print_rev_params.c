/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rev_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:25:58 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/14 18:47:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	while (*argv)
	{
		argv++;
	}
	argv--;
	while (argc > 1)
	{
		i = 0;
		while ((*argv)[i])
		{
			ft_putchar((*argv)[i]);
			i++;
		}
		ft_putchar('\n');
		argv--;
		argc--;
	}
}

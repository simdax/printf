/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:14:31 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 15:25:49 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int main (int argc, char **argv)
{
	argv++;
	while(*argv)
	{
		while(**argv)
		{
			ft_putchar(**argv);
			(*argv)++;
		}
		ft_putchar('\n');
		argv++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:46:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/07 20:51:12 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	print(char *c)
{
	while (*c)
		ft_putchar(*c++);
}

int main(int argc, char **argv)
{
	while (*argv)
		print(*argv++)
}

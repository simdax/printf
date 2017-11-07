/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:50:48 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 11:04:17 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_cmp(char *dest, char *src)
{
	char	repl1;
	char	repl2;

	while (*dest)
	{
		if (*dest == ' ')
		{
			dest++;
		}
		else
		{
			repl1 = *dest;
			repl2 = *src;
			if ('A' <= repl1 && repl1 <= 'Z')
				repl1 += 32;
			if ('A' <= repl2 && repl2 <= 'Z')
				repl2 += 32;
			if (repl1 != repl2)
				break ;
			dest++;
			src++;
		}
	}
	return (*dest - *src);
}

void	ft_spy(char **args)
{
	char	*mot1;
	char	*mot2;
	char	*mot3;

	mot1 = "president";
	mot2 = "attack";
	mot3 = "powers";
	while (*args)
	{
		if (!ft_str_cmp(*args, mot1))
			write(1, "Alert!!!\n", 9);
		if (!ft_str_cmp(*args, mot2))
			write(1, "Alert!!!\n", 9);
		if (!ft_str_cmp(*args, mot3))
			write(1, "Alert!!!\n", 9);
		args++;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_spy(++argv);
	return (0);
}

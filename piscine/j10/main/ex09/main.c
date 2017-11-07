/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:09:50 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 12:16:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex06/header.h"

int main(int argc, char **argv)
{
	int		arg1;
	int		arg2;
	char	*op;
	
	(void)op;
	if (argc != 4)
		return (1);
	check(argv, &arg1, &arg2);
	op = argv[2];
	calc(arg1, arg2, op);
	return (0);
}

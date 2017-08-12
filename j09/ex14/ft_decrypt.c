/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:50:24 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 15:33:43 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"

t_perso	create_perso(int age, char *name)
{
	t_perso	perso;

	perso.age = age;
	perso.name = name;
	return (perso);
}

int		ft_atoi(char *age)
{
	int	result = 0;

	result = 0;
	while (*age++)
	{
		result *= 10;
		result += *age - 48;
	}	
	return (result);
}

#include <stdio.h>

t_perso **ft_decrypt(char *str)
{
	int		len;
	int 	i;
	t_perso	**textttt_perso;
	t_perso	ex;
	
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == ';')
			len++;
	}
	textttt_perso = (t_perso**)malloc(sizeof(t_perso) * len);
	ex = create_perso(10, "bob");
	printf("%d\n", ex.age);
	printf("%s\n", ex.name);
	return (textttt_perso);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:36:04 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 11:49:47 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

int main()
{
	t_perso jack;
	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;
	return (0);
}

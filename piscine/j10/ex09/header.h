/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:59:36 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 14:09:16 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H
#define __HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef int(*calc_func)(int, int);
typedef struct 		s_opp
{
	char const *label;
	calc_func	func;
} 					t_opp;

int		check(char **argv, int *un, int *deux);
void	calc(int i, int j, char *f);
int ft_add(int i, int j);
int ft_sub(int i, int j);
int ft_mul(int i, int j);
int ft_div(int i, int j);
int ft_mod(int i, int j);
void ft_usage();

#include "ft_opp.h"


#endif

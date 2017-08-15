/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:59:36 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 11:40:48 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H
#define __HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef int(*calc_func)(int, int);

typedef struct 		s_op
{
	char const *label;
	calc_func	func;
} 					t_op;

void	calc(int i, int j, calc_func f);
int ft_add(int i, int j);
int ft_sub(int i, int j);
int ft_mul(int i, int j);
int ft_div(int i, int j);
int ft_mod(int i, int j);

#endif

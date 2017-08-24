/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:59:36 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/22 11:09:48 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H
# define __HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef int		(*t_calc_func)(int, int);

typedef struct	s_op
{
	char		*label;
	t_calc_func	func;
}				t_op;

int				ft_putchar(char c);
void			special(void);
void			print_neg(int n);

int				check(char **argv, int *un, int *deux, char **op);
t_calc_func		parse(char *op);
void			calcul(int i, int j, char *f);
int				ft_add(int i, int j);
int				ft_sub(int i, int j);
int				ft_mul(int i, int j);
int				ft_div(int i, int j);
int				ft_mod(int i, int j);

char			*ft_strcmp(char *str1, char *str2);
char			*ft_strdup(char *str);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *nb);

#endif

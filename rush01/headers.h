/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:34:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 20:59:02 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADERS_H
# define __HEADERS_H

# define STR(arg)	#arg
# define ERR		STR(Error\n)
# define LEN_ERR	6
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	check(char **mat, int pos, int nb);
int		check_input(char **argv);
int		check_square(char **mat, int r, int c, int nb);
int		resolve(char **mat, int pos, int *solutions, char ***sol);
void	print_mat(char **mat);
char	**copy_from(char **src, int incr);

#endif

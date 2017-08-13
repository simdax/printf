/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:34:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 16:35:42 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN_H
# define __MAIN_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		resolve(char **mat, int row, int col, int *solutions);
void	print_mat(char **mat);

#endif

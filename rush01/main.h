/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:34:13 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/13 15:42:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN_H
# define __MAIN_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		resolve(char mat[9][9], int row, int col, char (*solutions)[9][9]);
void	print_mat(char mat[9][9]);

#endif

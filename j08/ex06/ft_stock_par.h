/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:26:47 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/15 12:27:03 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H
# define __FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct 	s_stock_par
{
	int			size_param;
	char 		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

struct s_stock_par *ft_param_to_tab(int ac, char **av);

#ifndef

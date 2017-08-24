/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:14:03 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/24 10:31:43 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H
# define __FT_BOOLEAN_H

# define EVEN(nb)	nb % 2 == 0
# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define STR(str)	#str
# define EVEN_MSG	STR(I have an even number of arguments.\n)
# define ODD_MSG	STR(I have an odd number of arguments.\n)

typedef int			t_bool;

#endif

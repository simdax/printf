/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:13:18 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 13:43:34 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_DOOR_H
# define __FT_DOOR_H

# define TRUE			1
# define OPEN			1
# define CLOSE			0
# define EXIT_SUCCES	1

typedef	int	t_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
t_bool			open_door(t_door *door);
t_bool			close_door(t_door *door);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:35:49 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/11 12:56:59 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PERSO_H
# define __FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD  "kik d ku"

typedef struct		s_perso
{
	char			*name;
	char			*profession;
	float			life;
	unsigned int	age;
}					t_perso;

#endif

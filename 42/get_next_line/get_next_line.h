/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:53:07 by scornaz           #+#    #+#             */
/*   Updated: 2017/11/15 13:40:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE	32

#include <stdlib.h>
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

typedef struct	s_buf
{
	size_t	size;
	char	*content;
}				t_buf;

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:30:46 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 20:58:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H
#define __HEADER_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define ARGS_ERROR		write(2, "Too many arguments.", 30)
#define FILENAME_ERROR	write(2, "File name missing.", 30)
#define CHUNK_SIZE		64
#define BUF_SIZE		64000

int	ft_atoi(char *str);

#endif

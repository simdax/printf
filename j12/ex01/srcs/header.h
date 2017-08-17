/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:30:46 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/17 19:55:44 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H
#define __HEADER_H

#define ARGS_ERROR		write(2, "Too many arguments.", 30)
#define FILENAME_ERROR	write(2, "File name missing.", 30)
#define BUF_SIZE		64

#include <stdlib.h>
/* #include <sys/types.h> */
/* #include <sys/uio.h> */
#include <unistd.h>
#include <fcntl.h>



#endif

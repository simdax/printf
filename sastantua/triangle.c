/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:39:52 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/04 22:40:42 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *triangle(int n)
{
	return n + triangle(n-1);
}

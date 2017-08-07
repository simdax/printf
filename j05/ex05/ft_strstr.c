/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:57:57 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 18:58:00 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
  while (*str != *to_find)
    {
      str++;
    }
  if (*str == '\0')
    return 'NULL';
  else
    {
      to_find++;
      if (*to_find == '\0')
	{
	  
	}
      else
	while
	ft_strstr(str, to_find);
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:36:10 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/14 14:12:53 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_split_whitespaces(char **tab);
void	ft_putchar(char c);

void	put_str(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
		put_str(*tab++);
}

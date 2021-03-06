/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:53:49 by scornaz           #+#    #+#             */
/*   Updated: 2017/12/08 18:54:39 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*m_itoa(long long val, int base)
{
	char *res;
	char *tmp;
	int	i;

	tmp = (char*)malloc(sizeof(char) * 65);
	tmp[64] = '\0';
	i = 63;
	while (val >= base)
	{
		tmp[i] = "0123456789abcdef"[val % base];
		val /= base;
		i--;
	}
	tmp[i] = "0123456789abcdef"[val % base];
	res = strdup(tmp + i);
	free(tmp);
	return (res);
}

void	parse_value(int value, char type, t_num *a)
{
	a->value = m_itoa(value, 10);
	a->str_len = strlen(a->value);
	a->type = type;
}

void	re_orga(t_num *a)
{
	a->count = 0;
	a->precision = IF(a->precision - a->str_len);
	a->left = a->padding >= 0;
	a->padding = ABS(a->padding);
	a->padding -= a->str_len + a->precision;
}

void	parse_flags(char *str, t_num *a)
{
	a->type_padding = ' ';
	a->sign = 0;
	a->alternate = 0;
	while (*str)
	{
		if (*str == '#')
			a->alternate = 1;
		if (*str == '0')
			a->type_padding = '0';
		if (*str == '+')
			a->sign = 1;
		if (*str == '-')
			a->sign = -1;
		//if (*str == ' ')
		//rien
	}
}

int	main(int argc, char **argv)
{
	t_num		*a;

	(void)argc;
	a = (t_num*)malloc(sizeof(*a));
	parse_value(atoi(argv[1]), 'd', a);
	a->padding = argc > 2 ? atoi(argv[2]) : 0;
	a->precision = argc > 3 ? atoi(argv[3]) : 0 ;
	if (argc > 4)
		parse_flags(argv[4], a);
	else
		parse_flags("", a);
	re_orga(a);
	print_arg(a);
	free(a->value);
}

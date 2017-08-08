/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sort_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:30:37 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/08 17:06:27 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*sort_word(char *w1, char *w2)
{
	char	*result;
	if (*w1 < *w2)
		return (w1);
	else if (*w1 > *w2)
		return (w2);
	else
	{
		result = sort_word(++w1, ++w2);
		result--;
		return result;
	}
}

char **sort(char **str_list)
{
	
}

int main(int argc, char **argv)
{
	printf("%s", sort_word("5weamiscoucou", "5weamis"));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:17:06 by scornaz           #+#    #+#             */
/*   Updated: 2017/08/07 20:49:17 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		power_of(int nb, int power)
{
  if (power == 0)
    return (1);
  return (nb * power_of(nb, power - 1));
}

int		ft_sqrt(int nb, int base)
{
  int i;
  int pow;

  i = 1;
  while (i < 46341)
    {
      pow = power_of(base, i);
      //      printf("%d\n", pow);
      if (nb < pow)
	return (i);
      else if (nb == pow)
	return (i);
      else
	i++;
    }
  return (i);
}

void ft_put_nbr_base(int nb, char *str)
{
  int		result_length;
  char	*result;
  int		i;
  
  i = 0;
  while(str[i])
    i++;
  result_length = ft_sqrt(nb, i);
  printf("%d", result_length);
  result = malloc(sizeof(result) * result_length + 1);
  result[0] = 'a';
  result[1] = 'b';
  printf("%s", result);

  // 	while(*base) 
  /* 		length++; */
  /* 	i = 0; */
  /* 	while (i < length) */

}

void	main(void)
{
  ft_put_nbr_base(42, "42");
}

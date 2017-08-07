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
  return (46341);
}

void ft_put_nbr_base(int nb, char *base)
{
  int	result_length;
  int	length_base;
  char	*result;
  
  length_base = 0;
  while(base[length_base])
    length_base++;
  result_length = ft_sqrt(nb, length_base);
  //  printf("%d\n", result_length);
  result = malloc(sizeof(result) * result_length + length_base);

  /* printf("%d\n", result_length); */
  /* printf("%d\n", power_of(length_base, result_length)); */
  while(result_length > 0)
    {
      int pow = power_of(length_base, result_length - 1);
      printf("%d", base[nb / pow] - 48);
      if(nb - pow >= 0)
	nb -= pow;
      result_length--;
    }

}

void	main(void)
{
  ft_put_nbr_base(35, "42");
}

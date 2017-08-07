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

int		ft_sqrt(int base, int nb)
{
  int i;
  int pow;

  i = 1;
  while (i < 46341)
    {
      pow = power_of(base, i);
      if (nb < pow)
	return (i);
      else if (nb == pow)
	return (i);
      else
	i++;
    }
  return (i);
}

char	*create_string(int size)
{
  char *str[size + 1];

  return (str);
}

void ft_put_nbr_base(int nb, char *str)
{
  int		base_length;
  int		base;
  char	*result;
  int		l;

  printf("coucou");
  
  base = 2;
  base_length = 20;
  l = ft_sqrt(base, base_length);
  printf("%d", l);
  result = create_string(l);
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

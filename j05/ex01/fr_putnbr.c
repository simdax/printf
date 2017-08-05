int ft_putchar(char);

void ft_putnbr(int nb)
{
  int base;

  base = 1;
  while (nb / base > 0)
    {
      base *= 10;
      ft_putchar(nb)
    }
  
}

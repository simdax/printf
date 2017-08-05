int ft_putchar(char);

void ft_putstr(char *str)
{
  while (*str)
    {
      ft_putchar(*str);
      str++;
    }
}

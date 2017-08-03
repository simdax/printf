int ft_putchar(char c);
#include "../../ft_putchar.c"

void ft_putstr(char *str);

void ft_putstr(char *str)
{
  char j = *str;
  while(j)
    {
      ft_putchar(j);
      j = *(str++);
    }
}
  

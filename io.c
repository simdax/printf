#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int nput_char(int n, char c)
{
  int i;

  i = 0;
  while(i < n) {
    ft_putchar(c);
    i++;
  }
  return(0);
}

int main ()
{
  nput_char(42, 'c');
  ft_putchar('\n');
  return(0);
}

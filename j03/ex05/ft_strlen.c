int ft_strlen(char *str);

int ft_strlen(char *str)
{
  int length = 0;
  while(str[length] != '\0')
    {
      length++;
    }
  return length;

}

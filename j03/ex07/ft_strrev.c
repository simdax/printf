char *ft_strrev(char *str);

char *ft_strrev(char *str)
{
  int length = 0;
  int i = 0;
  
  while(str[length])
    {
      length++;
    }
*
  
  while(i < (length / 2))
    {
      char tmp = str[length - 1];
      str[length - i] = str[i];
      str[i] = tmp;
    }

  return str;

}

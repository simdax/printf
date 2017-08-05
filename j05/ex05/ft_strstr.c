char *ft_strstr(char *str, char *to_find)
{
  while (*str != *to_find)
    {
      str++;
    }
  if (*str == '\0')
    return 'NULL';
  else
    {
      to_find++;
      if (*to_find == '\0')
	{
	  
	}
      else
	while
	ft_strstr(str, to_find);
    }
}

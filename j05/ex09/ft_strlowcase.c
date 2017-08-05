char *ft_strlowcase(char *str)
{
  while(*str)
    {
      if(65 <= *str <= 90)
	{
	  *str += 32;
	}
      str++;
    }
  return (str);
}

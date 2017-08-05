char *ft_strupcase(char *str)
{
  while(*str)
    {
      if(97 <= *str <= 122)
	{
	  *str -= 32;
	}
      str++;
    }
  return (str);
}

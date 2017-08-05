int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  int i;

  i = 0;
  while(s1[i] || i > n)
    {
      i++;
      if(s2[i] == '\0')
	return (-1);
    }
  if(s2[i] == '\0')
    return (0);
  else
    return (1);
}

#include "parser.h"

static char	*is_flag(char *str)
{
  int i;

  i = 0;
  while (*str)
    {
      if (*str == '#' || *str == '0' ||
  	  *str == ' ' || *str == '+' ||
  	  *str == '-')
	{i++;}
      else
	break ;
      str++;
    }
  return (ft_strndup(str, i));
}

static 

char	**parser(char *str)
{
  char	*res[4];
  
  res[0] = is_flag(str);
  str += ft_strlen(res[0]);
  res[1] = ft_atoi(str);
  str += ft_strlen(res[1]);
    if (str[0] == '.')
      {
	res[2] = ft_atoi(str);
	str += ft_strlen(res[1]);
      }
  res[3] = str[0];
  return (res);
}

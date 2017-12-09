#include "get_next_line.h"

int	find_n(char **stat, char **line)
{
  char	*op;
  
  if (stat && *stat && (op = ft_strchr(*stat, '\n')))
    {
      *line = ft_strsub(*stat, 0, op - *stat);
      free(*stat);
      *stat = ft_strdup(op + 1);
      return (1);
    }
  return (0);
}

char	*strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		len1;
	int		len2;

	if (!s1)
	    len1 = 0;
	else
	  len1 = ft_strlen(s1);
	if (!s2)
	    len2 = 0;
	else
	  len2 = ft_strlen(s2);
	len = len1 = len2;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (s1 && str)
	  ft_strcpy(str, s1);
	if (s2 && str)
	  ft_strcat(str, s2);
	str[len] = 0;
	return (str);
}

int				get_next_line(int fd, char **line)
{
  int			ret;
  char			buf[BUFF_SIZE];
  char			*tmp;
  static char		*stat[ULIMIT];

  if (!line || fd < 0 || fcntl(fd, F_GETFD) == -1)
    return (-1);
  if (&stat[fd] && find_n(&stat[fd], line))
    return (1);
  else
    {
      while ((ret = read(fd, buf, BUFF_SIZE)))
	{
	  buf[ret] = '\0';
	  tmp = strjoin(stat[fd], buf);
	  free(stat[fd]);
	  stat[fd] = tmp;
	  if (find_n(&stat[fd], line))
	      return (1); 
	}
      if (stat[fd] && ft_strlen(stat[fd]) > 0)
	{
	  *line = stat[fd];
	  return (1);
	}
      return (0);
    }
}

int main(int argc, char *argv[])
{
  int fd = open(argv[1], O_RDONLY);
  char *line;
  while (get_next_line(fd, &line))
    printf("%s", line);
  return 0;
}

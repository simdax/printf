gnl(int fd, char **line)
{
  static	*stat[24];
  char		*tmp;

  stat[fd] = "prout de ouf \n io";
  if (strlen(stat[fd]) > 0)
    if (op = strchr(stat[fd], '\n'))
      {
	free(*line);
	*line = (char*)malloc(sizeof(char) * (stat[fd] - op));
	*line = strncpy(stat[fd], (stat[fd] - op));
	return (1);
      }
  return (0);
}

int main(int argc, char **argv)
{
  char *line = NULL;
  int fd = open(argv[1], O_RDONLY);
  
  while (fd && gnl(fd, &line))
    printf("%s", line);
}

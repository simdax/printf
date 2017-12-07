#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

int gnl(int fd, char **line)
{
	static char	*stat[24];
	char		buf[32];
	char		*realloc = NULL;
	int		ret;

	if (stat[fd] && strlen(stat[fd]) > 0)
		if (realloc = strchr(stat[fd], '\n'))
		{
			//free(*line);
			char *cpy = strdup(realloc + 1);
			*line = (char*)malloc(sizeof(char) * (realloc - stat[fd] + 1));
			bzero(*line, realloc - stat[fd] + 1);
			strncpy(*line, stat[fd], (realloc - stat[fd]));
			free(stat[fd]);
			stat[fd] = cpy;
			return (1);
		}
	while ((ret = read(fd, buf, 32)) > 0)
	{
		buf[ret] = 0;
		int len;
		char *tmp;
		if(!stat[fd])
			len = 0;
		else
			len = strlen(stat[fd]);
		realloc = (char*)malloc(sizeof(char) * (len + ret + 1));
		bzero(realloc, len + ret + 1);
		if (stat[fd])
			strcpy(realloc, stat[fd]);
		strcat(realloc, buf);
		free(stat[fd]); 
		stat[fd] = realloc;
		if (tmp = strchr(realloc, '\n'))
		{
			//free(*line);
			*line = (char*)malloc(sizeof(char) * (tmp - realloc + 1));
			bzero(*line, tmp - realloc + 1);
			strncpy(*line, realloc, (tmp - realloc));
			stat[fd] = strdup(tmp + sizeof(char) * 1);
			free(realloc);
			return (1);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	char *line = NULL;
	int fd = open(argv[1], O_RDONLY);
	
	while (fd && gnl(fd, &line))
		printf("%s\n", line);
}

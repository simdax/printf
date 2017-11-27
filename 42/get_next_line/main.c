#include "get_next_line.h"

int			main(int argc, char **argv)
{
	int			fd1;
	int			fd2;
	int			fd3;
	int			ret;
	char		*res;

	if (argc == 1)
	{
		get_next_line(0, &res);
		ft_putendl_fd(res, 1);
	}
	else if (argc > 3)
	{
		fd1	= open(argv[1], O_RDONLY);
		fd2	= open(argv[2], O_RDONLY);
		fd3	= open(argv[3], O_RDONLY);
		get_next_line(fd1, &res);
		ft_putendl_fd(res, 1);
		get_next_line(fd2, &res);
		ft_putendl_fd(res, 1);
		get_next_line(fd3, &res);
		ft_putendl_fd(res, 1);
	}
	else if ((fd1 = open(argv[1], O_RDONLY)))
	{
		while ((ret = get_next_line(fd1, &res)) > 0)
			ft_putendl(res);
	}
}

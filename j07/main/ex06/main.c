#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
void	atoi_rev(int nb, char *base, int len_base, char* dest);
int		b_from(char *c, char *base, int len_base, int len);

int main(int argc, char **argv)
{
	char *nbr = argv[1];
	char *base_f = argv[2];
	char *base_t = argv[3];
	
	int n;
	char *str;
	int i = 0;
	int j = 0;
	int tmp;

	(void)argc;
	str = (char*)malloc(sizeof(char) * 100);
	n = b_from(nbr, base_f, 10, 4);
	printf("%d\n", n);
	atoi_rev(n, base_t, 10, str);

	while (str[i++])
		;
	i -= 2;
	j = 0;
	while (i - j > 1)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}

	printf("%s", str);

	return (0);
}

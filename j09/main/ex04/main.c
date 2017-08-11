#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_rot42(char *str);

int main()
{
	char str[] = "abcdefghijklmnopqstuvwzy mon coco ABCDEFGHIJKLMNOPQRSTUVWXYZque tal";

	printf("%s\n", str);
	printf("%s", ft_rot42(str));
	return (0);
}

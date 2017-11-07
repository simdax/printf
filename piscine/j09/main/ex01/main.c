#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <time.h>

void ft_takes_place(int hour);

int main()
{
	int nb = 0;
	while(nb < 24)
		ft_takes_place(nb++);
}

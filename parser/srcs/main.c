#include "parser.h"

int main(int argc, char **argv)
{
	t_flags t;
	if (argc > 1)
 		t = parse(argv[0]);
	printf("%d", t);	
}

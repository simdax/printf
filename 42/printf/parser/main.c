#include "parser.h"

void print_struct(t_flags t)
{
	printf("%d", t.zero);	
	printf("%d", t.plus);	
	printf("%d", t.hash);	
	printf("%d", t.minus);	
	printf("%d", t.apostrophe);	
	printf("%d", t.space);	
}

int main(int argc, char **argv)
{
	t_flags t;
 	t = parse(argv[1]);
	print_struct(t);
}

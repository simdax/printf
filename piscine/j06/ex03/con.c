int main(int argc, char **argv)
{
	int i = 0;
	printf("%d ", argc);
	while(i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
}

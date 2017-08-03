
int		atoi(char *str)
{
	int	length;
	int	res;
	int decimal;
	int i;

	length = 0;
	res = 0;
	while (str[length])
	{
		length++;
	}
	length--;
	while (str[length])
	{
		decimal = 1;
		i = 0;
		while (i < res)
		{
			decimal *= 10;
		}
		res += str[length] * decimal;
		length--;
	}
	return (res);
}

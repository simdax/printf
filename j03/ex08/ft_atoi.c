int atoi (char *str);

int atoi (char *str)
{
  int length = 0;
  int res = 0;
  
  while(str[length])
    {
      length++;
    }
  length--;

  while(str[length])
    {
      int decimal = 1;
      int i = 0;
      while(i < res)
	{
	  decimal *= 10;
	}
      res += str[length] * decimal;
      length--;
    }

  return res;
  
}

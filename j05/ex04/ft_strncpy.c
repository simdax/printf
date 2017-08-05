char *strncpy(char *dest, char *src, unsigned int n)
{
  int i;

  i = 0;
  while(i < n)
    {
      if(src[i])
	dest[i] = src[i];
      else
	dest[i] = '\0';
      i++;
    }
  return dest;
}

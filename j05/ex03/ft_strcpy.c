char *strncpy(char *dest, char *src, unsigned int n)
{
  int i;
  
  while(*src)
    {
      *dest = *src;
      src++;
      dest++;
    }
  return dest;
}

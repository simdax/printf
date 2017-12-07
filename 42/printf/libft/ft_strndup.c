#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *origin, size_t size)
{
  char	*res;

  res = (char*)malloc(sizeof(char) * (size + 1));
  ft_strncpy(res, origin, size);
  return (res);
}

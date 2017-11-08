
#ifndef INCLUDE_H
# define INCLUDE_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(void *s, void *s2);
char 	*ft_strcpy(char * dst, const char * src);


char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strstr(const char *haystack, const char *needle);
char	*strnstr(const char *haystack, const char *needle, size_t len);

#endif

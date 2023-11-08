#ifndef LIBFT_H
#define LIBFT_H

#include<stdlib.h>
#include <string.h>
#include<strings.h>
#include<stdio.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint( int c);
int	memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest,const void *src, size_t n);
size_t  ft_strlen(const char *str);
int	ft_strncmp(const char *s1,const char *s2,size_t n);
char	*ft_strrchr(const char *s, int c);
char    *ft_strdup(const char *s1);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);



#endif
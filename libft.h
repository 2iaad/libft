#ifndef LIBFT_H
#define LIBFT_H

#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<stdio.h>

int	atoi(const char *str);
void	ft_bzero(void *ptr,size_t n);
void	*ft_calloc(size_t count,size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint( int c);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest,const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
char	*ft_strchr(const char	*s,int c);

size_t	strlen(const char *s);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int	ft_strncmp(char *s1,char *s2,int n);
char	*strnstr(const char *haystack, const char *needle, size_t len);
char	*strrchr(const char *s, int c);
int	ft_tolower(int c);
int	toupper(int c);
char	*ft_substr(char const *s, unsigned int start,size_t len);

#endif
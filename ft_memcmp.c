#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t   i;
	const char *str1;
	const char *str2;
	
	i = 0;
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while (str1[i] == str2[i] && i < n) // or instead of (i<n) use n--
	{
		if (str1[i] != str2[i])
			return(str1[i] - str2[i]);
		i++;
	}
	return(0);
}

int main()
{
  printf("%d",memcmp("slm","sln",3));
}

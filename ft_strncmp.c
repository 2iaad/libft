#include "libft.h"

int	ft_strncmp(const char *s1,const char *s2,size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*int main()
{
	char *s1 = "1111111111$";
	char *s2 = "1111111111$";

	printf("%d\n",ft_strncmp(s1,s2,6));

	printf("%d",strncmp(s1,s2,6));
}*/
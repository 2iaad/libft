#include"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;
	i=0;
	while(s[i] != '\0')
		i++;
	return i;
}
/*int main()
{
	printf("%d",strlen("12345678"));
}*/
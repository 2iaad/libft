#include "libft.h"

size_t  ft_strlen(const char *str)
{
	size_t i;
	i=0;
	while(str[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
	printf("%d",strlen("12345678"));
}*/
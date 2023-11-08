#include<stdio.h>
#include"libft.h"

void	*memchr(const void *s, int c, size_t n) // finds exact byte in a memory
{
	char *o;
	o = (char*)s;
	size_t i;

	i = 0;
	if(c == '\0') //not necessairy
		return(0);
	while (o[i] != '\0' && i <= n)
	{
		if (o[i] == c)
		{
			return(o+i); // now the adresse of the pointer will incremente by i ( [o+i,'\0'[ )
		}
		i++;
	}
	return(0);
}

/*int main()
{
	printf("%s",memchr("123xxxxx",'\0',2));
}*/
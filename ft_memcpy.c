#include"libft.h"

void	*ft_memcpy(void *dest,const void *src, size_t n)
	//const: It indicates that the data pointed to by the pointer is constant, meaning you cannot modify the data through this pointer. 
{
	unsigned char *d; // unsigned because a string cannot have negative values
	unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if ( !d && !s) // can i only use !s  ?
		return(0);
	while ( i < n)
	{
		d[i] = s[i];
		i++;
	}
	//It doesn't insert null terminators ('\0') to mark the end of a string because it doesn't assume the data is string data.it work in bytes lvl.
	return (dest); // cant return d,bec we need to return a void pointer
}

/*int main()
{
	char a[20] = "ziyad derfoufi";
	printf("%s",ft_memcpy(a+3,a,15));
}
int main()
{
	char d[3] = "";
	char s[] = "hello";
	printf("%s",ft_memcpy(d,s,2));
}*/
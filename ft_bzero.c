#include "libft.h"

void	ft_bzero(void *ptr,size_t n)
{
	char *ptrr = ptr; // bec it itterates throught the block of memorie by exactly one bytes 
	while (n--)
	{
		*ptrr =0;
		ptrr++;
	}
}

int  main()
{
	char uno[10] = "salam";
	printf("%s\n",uno);
	ft_bzero(uno,3);
	printf("%s\n",uno);
	return (0);
}
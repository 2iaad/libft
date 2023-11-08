#include "libft.h"

int	ft_tolower(int c)
{
	if ( c <= 'Z' && c >= 'A')
		c += 32;
	return(c);
}

/*int main()
{
	printf("%d",ft_tolower('1'));
}*/
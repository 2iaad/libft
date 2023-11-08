#include "libft.h"

int	ft_isprint( int c)
{
	if ( c > 31 && c < 127 )
		return (1);
	else
		return(0);
}

/* int main()
{
	int q = 32;
	printf("%d", ft_isprint(q));
}*/

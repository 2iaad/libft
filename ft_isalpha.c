#include "libft.h"

int	ft_isalpha(int c)
{
	if ( c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A' )
		return (1);
	else
		return(0);
}

/*int main()
{
	int q = ')';
	printf("%d", ft_isalpha(q));
}*/

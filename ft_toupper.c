#include"libft.h"

int	toupper(int c)
{
	if (c >= 'a' && c<= 'z')
		c -= 32;
	return(c);
}

/*int main()
{
	printf("%d",toupper('q'));
}*/
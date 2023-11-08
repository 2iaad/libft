#include<stdio.h>
#include"libft.h"

int	ft_isdigit(int c)
{
	if ( c >= '0' && c <= '9' )
		return(1);
	else
		return(0);
}

/*int main()
{
	int q = 48;
	printf("%d\n" , ft_isdigit(q));
	return 0;
}*/
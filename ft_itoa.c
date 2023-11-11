#include"libft.h"

static int	ft_digitsnum(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return(1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return(i);
}
/*int main()
{
	long int q = 123456789101112;
	printf("%d",ft_digitnum(q));
}*/

char	*ft_itoa(int n)
{
	int digitsnum;
	char *memptr; // this will point to the memory allocated
	int nb;

	nb = n;
	digitsnum = ft_digitsnum(nb);
	if ( nb < 0)
	{
		nb *= -1; // convert to positive
		digitsnum++; // reserve space for the '-' sign
	}
	memptr = (char*)malloc(sizeof(char) * digitsnum + 1); // +1 for null terminator
	if(!memptr)
		return (NULL);
	
	memptr[digitsnum] = '\0';
	while(digitsnum)
	{
		digitsnum--;
		memptr[digitsnum] = nb % 10 + '0';
		nb /= 10;
	}
	if( n < 0)
		memptr[0] = '-';
	return (memptr);
}

int main()
{
	int c = 66666;
	printf("%s",ft_itoa(c));
}

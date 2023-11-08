#include"libft.h"
/* set "len" amount of bytes of "c" to unsigned char "b"*/
void	*ft_memset(void *b, int c, size_t len) // inicialise len number of bytes to c in b
{
	while ( len > 0)
	{
		((unsigned char *)b)[len-1] = c; // -1 bec while itterating we start from zero
		len--;
	}
	return(b);
}
int main()
{
	char S[10]= "salam";
	int x = 'x';
	printf("%s\n",S);
	printf("%s\n",ft_memset(S,'x',1));
	printf("%s",memset(S,'x',1));
}
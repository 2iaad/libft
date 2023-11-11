#include"libft.h"

static  int ft_countnumbers(int n)
{
    int i;

    i = 0;
    if ( n == 0 )
        return (1);
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}
/*int main()
{
	long int q = 123456789101112;
	printf("%d",ft_digitnum(q));
}*/

char *ft_itoa(int n)
{
    int nb;
    int cn;
    char *ptr;

    nb = n;
    cn = ft_countnumbers(nb);
    if ( nb < 0 )
    {
        nb *= -1;
        cn++;
    }
    ptr = (char*) malloc (sizeof(char) * cn + 1);
    if (!ptr)
        return (NULL);
    
    ptr[cn] = '\0';
    if (n < 0)
        ptr[0] = '-';
    while( cn > 1)
    {
        cn--;
        ptr[cn]= nb % 10 +'0';
        nb /= 10;
    }
    return(ptr);
}
int main()
{
    int c = -1337;
    printf("%s",ft_itoa(c));
}
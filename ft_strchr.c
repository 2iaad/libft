#include "libft.h"

char	*ft_strchr(const char	*s,int c)
{
	char *o;
	o = (char*)s;
	int i;

	i = 0;
	if(c == '\0')
		return(0);
	while (s[i] != '\0')
	{
		if (o[i] == c)
		{
			return(o+i); // now the adresse of the pointer will incremente by i ( [o+i,'\0'[ )
		}
		i++;
	}
	return(0);
}

/*int main()
{
	printf("%s",ft_strchr("",'l'));
}*/
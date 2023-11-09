#include"libft.h"

char	*ft_strchr(const char	*s,int c)
{
	int i;

	i = 0;
	if(c == '\0')
		return(0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return((char*)s+i); // now the adresse of the pointer will incremente by i ( [o+i,'\0'[ )
		}
		i++;
	}
	return(0);
}

/*int main()
{
	printf("%s\n",ft_strchr(" sls",'l'));
	printf("%s",strchr(" sls",'l'));
}*/
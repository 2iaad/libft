#include"libft.h"

char	*strrchr(const char *s, int c)
{
		int len;

		if (c == '\0')
			return(0);

		len = ft_strlen(s);

		while (len >= 0)
		{
			if (s[len] == c)
			{
				return(s+len);
			}
			len--;
		}
		return(0);
}

/*int main()
{
	char str[100] = "salam layn3al tbon5mok";
	printf("%s",strrchr(str,'l'));
}*/
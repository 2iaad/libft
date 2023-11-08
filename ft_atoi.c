#include"libft.h"

int	atoi(const char *str)
{
	int i;
	int i2;
	int s;
	int nb;

	i = 0;
	i2 = 0;
	s = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && i2 <= 1)
		{
			s*= -1;
			i2++;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb*10 + (str[i] - '0');
		i++;
	}
	return (nb * s);
}

/*int main()
{
	printf("%d",atoi("-++----+++--123bamchalsbata1234"));
}*/
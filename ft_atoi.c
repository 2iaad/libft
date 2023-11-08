#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int s;
	int nb;

	i = 0;
	s = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s*= -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb*10 + (str[i] - '0');
		i++;
	}
	return (nb * s);
}
int main()
{
	printf("%d\n",ft_atoi("9223372036854775808"));
	printf("%d",atoi("9223372036854775808"));
}
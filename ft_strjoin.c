#include"libft.h"
/* allocate memory(str) for the combined s1 and s2 and return (str),guaranty ending with '\0' */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0') // fill the str allocated with the first s1
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0') // fill the str allocated with the second s2
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0'; // put null at the end to 
	return (str);
}
int main ()
{
	char *s1 = "salam ";
	char *s2= "wach cv";
	printf("%s",ft_strjoin(s1,s2));
}
#include"libft.h"
/* duplicate a string and return the duplicated one*/
char		*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *) malloc (sizeof(char) * ft_strlen(s1) + 1); // to allocate memory for substring
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
int main()
{
    const char *s1 = "sallam";
    printf("%s\n",ft_strdup(s1));
    printf("%s",strdup(s1));
}
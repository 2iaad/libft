static	int	allocate_x(char const *str, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (str[start + i] && i < len)
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (0);
	if (!dest)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		start = s_len;
	dest = (char *)malloc(sizeof(char) * (allocate_x(s, start, len) + 1));

	i = 0 ;
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
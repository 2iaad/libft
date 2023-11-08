#include"libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len) // locate a substring in a string
{
	size_t i;
	size_t j;
	char *h;
	char *n;

	h = (char*)haystack;
	n = (char*)needle;
	i = 0;
	j = 0;
	if (n[i] == '\0')
		return(h);
	while ( h[i] != '\0' && i < len )
	{
		if(n[j] == h[i]) // start of the test
		{
			while (h[i+j] == n[j] && i+j < len )
			{
				if(n[j+1] == '\0') // checks wether the 'substring' have ended or not(success)
					return(h+i);
				j++; // go to the next letter in both string and 'substring'
			}
			j = 0; // the loop fails and initialize the j=0 to go to first letter of the substring and check again
		}
		i++; // to go to next letter of the string 
	}
	return(0);
}

/*int main()
{
	printf("%s",strnstr("","\0",50000));
}*/
#include"libft.h"

static char    f(unsigned int i,char c)
{
    return((char)i+'0');
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;
    
    i = 0;
    str = (char *) malloc (sizeof(char) * ft_strlen(s)+1);
    if (!str)
        return(NULL);
    while (s[i])
    {
        str[i] =f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}
int main()
{
    char (*p)(unsigned int, char);
    p = &f;
    char *s = "salam ana";
    printf("%s",ft_strmapi(s,&f));
}
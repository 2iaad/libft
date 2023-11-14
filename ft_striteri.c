#include"libft.h"

void    f(unsigned int i, char *s)
{
    if (*s == 'a')
    {
        *s = ' ';
    }
}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i,&s[i]);
        i++;
    }
}

/*int main()
{
    char s[15] = "sir gha thwaa";
    ft_striteri(s,f);
    printf("%s",s);
}*/
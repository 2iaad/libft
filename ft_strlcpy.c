#include "libft.h"
/* this function copy src to dest "size" times, then returns size of src ,guaranty la termination avec '\0'*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
    int len;
    len = 0;
    while (src[len] && --size) /* -- to save sapce for '\0'*/
    {
        *dest++ = src[len++];
    }
    *dest = '\0';
    while (src[len])
    {
        len++;
    }
    return(len);
}
int main()
{
    char d[10] = "salam hehe";
    const char *s = "hello";
    printf("%lu\n",ft_strlcpy(d,s,sizeof(d)));
    printf("%s\n",d);
    printf("%lu\n",strlcpy(d,s,sizeof(d)));
    printf("%s",d);
}
/* strcpy is simple but risky because it doesn't check buffer sizes, while strlcpy is designed to be safer 
by taking the buffer size into account and ensuring null-termination */
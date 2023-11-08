#include"libft.h"
/* combine two strings then returns their size */
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
    // restrict informs the compiler that memory does not overlap
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (dst[i] == '\0')
        return(strlen(src));
    if (src[i] == '\0')
        return(strlen(dst));
    while(dst[i] != '\0' && i < dstsize)
    {
        i++;
    }
    while (src[j] != '\0' && i+j+1 <= dstsize)
    {
        dst[i+j] = src[j];
        j++;
    }
    dst[i+j] = '\0';
    return(i+j+1);
}

int main()
{
    char dest[11] = "ana";
    char *src = "";
    printf("%lu\n",ft_strlcat(dest,src,11));
    printf("%lu",strlcat(dest,src,11));
}
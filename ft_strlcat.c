#include"libft.h"
/* combine two strings then returns their size,guaranty ending with '\0' */
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
    // restrict informs the compiler that memory does not overlap
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (dst[i] == '\0')
        return(ft_strlen(src));
    if (src[i] == '\0')
        return(ft_strlen(dst));
    while (dst[i] != '\0' && i < dstsize) // skip the dest to the last of the string
    {
        i++;
    }
    while (src[j] && i+j+1 <= dstsize) //copy src to the last of the dest,making enough space for the null terminator
    {
        dst[i+j] = src[j];
        j++;
    }
    dst[i+j] = '\0';
    return(i+j+1);
}

int main()
{
    char dest[25] = "";
    char *src = "salam";
    printf("%lu\n",ft_strlcat(dest,src,25));
    printf("%s\n",dest);
    printf("%lu\n",strlcat(dest,src,25));
    printf("%s",dest);
}
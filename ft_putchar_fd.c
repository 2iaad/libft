#include"libft.h"

void    ft_putchar_fd(char c,int fd) // understand the meaning of the file descriptor !!!!!!
{
    write(fd,&c,1);
}
/*int main()
{
    char c = 'a';
    ft_putchar(c,1);
}*/
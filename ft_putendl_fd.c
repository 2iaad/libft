/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:25:42 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:25:43 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        write (fd,s,1);
        s++;
    }
    write(fd,"\n",1);
}
int main()
{
    ft_putendl_fd("ya l9alaawiiiiii",1);
}

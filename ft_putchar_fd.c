/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:25:33 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:25:34 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c,int fd) // understand the meaning of the file descriptor !!!!!!
{
    write(fd,&c,1);
}
/*int main()
{
    char c = 'a';
    ft_putchar(c,1);
}*/

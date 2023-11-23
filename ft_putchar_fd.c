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
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write (fd, &c, 1);
}

// int main()
// {
// 	char *c = "slm";
// 	char *file = "file.txt"; // file to be created
// 	int fd = open(file, O_WRONLY | O_CREAT ,0723);// wronly and creat are the flags,
//if not created creat,0732 are ugo permissions
// 	ft_putstr_fd(c, fd);
// 	close (fd);
// }
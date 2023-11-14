/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:25:52 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:25:54 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb,int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-',1);
		nb *= -1;
	}
	if (nb == -2147483648)
	{
		write(fd, "2147483648", 12);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10,1);
		nb %= 10;
	}
	ft_putchar_fd(nb + 48,1);
}

int main()
{
	int number = -74545;
	ft_putnbr_fd(number,1);
	ft_putchar_fd('\n',1);
	return 0;
}

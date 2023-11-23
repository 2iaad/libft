/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:25:23 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:25:24 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		((unsigned char *)b)[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}

/*int main()
{
	char n= 4;
	ft_memset(&n , 1, 1);
	printf("%hhd\n",n);
	// printf("%ld",memset(&n,x,1));
}*/

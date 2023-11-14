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
/* set "len" amount of bytes of "c" to unsigned char "b" custun implementation*/
void	*ft_memset(void *b, int c, size_t len) //int offers flexibility to set a wider range of values in memory,size_t;represent sizes of objects
{
	while ( len > 0)
	{
		((unsigned char *)b)[len-1] = (unsigned char)c; // -1 bec while itterating we start from zeroc, unsigned char=>avoiding sign-extension issues that could occur
		len--;
	}
	return(b);
}
int main()
{
	char n= 4;
	ft_memset(&n , 1, 1);
	printf("%hhd\n",n);
	// printf("%ld",memset(&n,x,1));
}
/*What would happen if b in ft_memset points to NULL?
It could lead to unexpected behavior or segmentation faults as ft_memset attempts to write to a NULL pointer.*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:25:12 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:25:13 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len) // len;number of bytes to copy
//designed to handle overlapping memory regions correctly
{
	char *s;
	char *d;
//s and d are character pointers used to cast the source and destination memory pointers to char*
	size_t i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s) //check whether the destination memory (d) is located after the source memory (s) in memory, indicating an overlap between the two memory regions(When d is greater (higher address) than s, it means that the destination memory starts after the source memory in memory layout)
		while ( len-- > 0 )
			d[len] = s[len];
	else	//normal case
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return(dest);
}
/*int main()
{
	char a[20] = "ziyad derfoufi";
	printf("%s",ft_memmove(a+3,a,15));
}*/

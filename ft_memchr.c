/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:24:38 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/19 17:58:54 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*o;
	size_t			i;

	i = 0;
	o = (unsigned char *)s;
	while (i < n)
	{
		if (o[i] == (unsigned char)c)
			return ((char*)o + i);
		i++;
	}
	return (0);
}

// int main()
// {
// 	int *i = "1V";
// 	char *s = i[0];
// 	printf("%s",s);
// 	// printf("%s",ft_memchr("15$cc2Va$321xx",i,10));
// }
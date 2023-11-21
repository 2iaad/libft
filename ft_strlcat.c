/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:27:06 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/15 15:47:50 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[i] && i < size)
		i++;
	while ((src[k]) && ((i + k + 1) < size))
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i != size)
		dst[i + k] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
	char dest[11] = "oho";
	char *src = "salam";
	printf("%lu\n",ft_strlcat(dest,src,11));
	printf("%s\n",dest);
}*/
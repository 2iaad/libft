/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:28:34 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:28:35 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* finds a substr in s starting from index "start" and allocate exactly "len" size for substr */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1)); // allocate memory for the substring

	if (!str)
		return (NULL);
	while (s[i]) // iterate throught string untill we find "start"
	{
		if (i >= start && j < len) //
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int main()
{
    char *a = "salam";
	printf("%p\n",&a);
    printf("%s\n",ft_substr(a,-4294967296,3));
}

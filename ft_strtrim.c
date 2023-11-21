/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:28:24 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/15 14:54:41 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	if (s1 != NULL || set != NULL)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]))
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
// int main()
// {
//     char *s1 = "salam cv";
//     char *s2 = "sav";
//     printf("%s",ft_strtrim(s1,s2));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:28:24 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:28:25 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* check if there is any letter of set in s1 (in the beginning/the end) then remove it */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0; // so it wont point to a random memory
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
		// start checking from the beginning of the string letter by letter if there is any letter of s1 in sett
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		// checking from the last of the string
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1)); // allocate memory for the string that doesnt contain set in the beggining and the end
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1); // if allocation succeeded copy from s1 to str (j(last of s1) - i(first of s2)) + 1(for null terminator)
	}

	return (str);
}
int main()
{
    char *s1 = "ana asalam azna smity salam ziad salamzl salamana ana";
    char *s2 = " ana";
    printf("%s",ft_strtrim(s1,s2));
}

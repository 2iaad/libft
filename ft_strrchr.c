/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:28:11 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:28:12 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
		int len;

		if (c == '\0')
			return(0);

		len = ft_strlen(s);

		while (len >= 0)
		{
			if (s[len] == c)
			{
				return(s+len);
			}
			len--;
		}
		return(0);
}

/*int main()
{
	char str[100] = "salam layn3al tbon5mok";
	printf("%s",strrchr(str,'l'));
}*/

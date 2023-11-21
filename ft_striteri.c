/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:26:42 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/15 15:38:39 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(unsigned int i, char *s)
// {
// 	if (*s == 'a')
// 	{
// 		*s = ' ';
// 	}
// 	i++;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main()
{
	char s[15] = "sir gha thwaa";
	ft_striteri(s,f);
	printf("%s",s);
}*/
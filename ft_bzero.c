/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:01:32 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:01:35 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	char	*ptrr;

	ptrr = (char *)ptr;
	while (n--)
	{
		*ptrr = 0;
		ptrr++;
	}
}

/*int  main()
{
	char uno[10] = "salam";
	printf("%s\n",uno);
	ft_bzero(uno,1);
	printf("%s\n",uno);
	return (0);
}*/
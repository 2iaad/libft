/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:01:32 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/15 19:50:05 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int  main()
{
	char uno[10] = "salam";
	printf("%s\n",uno);
	ft_bzero(uno,1);
	printf("%s\n",uno);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:23:50 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:23:52 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	ft_isascii(int c)
{
	if ( c >= 0 && c <= 127 )
		return (1);
	else
		return(0);
}

/*int main()
{
	int q = 128;
	printf("%d" , ft_isascii(q));
}*/

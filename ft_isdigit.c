/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:23:59 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:24:01 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	ft_isdigit(int c)
{
	if ( c >= '0' && c <= '9' )
		return(1);
	else
		return(0);
}

/*int main()
{
	int q = 48;
	printf("%d\n" , ft_isdigit(q));
	return 0;
}*/

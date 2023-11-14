/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:01:45 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/14 20:01:49 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count,size_t size)
{
	char	*ptr;
	ptr = (char*) malloc (count * sizeof(char*));
	ft_bzero(ptr,count);
	return(ptr);
}

int main()
{
	int *A = malloc(sizeof(int));
	int *B = ft_calloc(1, sizeof(int));

	printf("the adress of pointer A: %d and the value : %d \n", A, *A);
	printf("the adress of pointer B: %d and the value : %d \n", B, *B);

	return (0);
}
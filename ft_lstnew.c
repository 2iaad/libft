/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:38:32 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/23 17:24:09 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// create a nod and giving it a content
t_list	*ft_lstnew(void *cont)
{
	t_list	*nn;

	nn = (t_list *) malloc (sizeof(t_list));
	if (!nn)
		return (0);
	nn->content = cont;
	nn->next = NULL;
	return (nn);
}

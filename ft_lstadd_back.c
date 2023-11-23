/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:16:14 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/23 17:17:31 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!lst || !new)
		return ;
	if (*lst == NULL)// checks if the linked list is empty
	{
		*lst = new; // assign new to the pointer so it can be the only node in the linked list
	}
	else
	{
		lastnode = ft_lstlast(*lst);
		lastnode->next = new;
	}
}

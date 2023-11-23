/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zderfouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:38:46 by zderfouf          #+#    #+#             */
/*   Updated: 2023/11/23 17:20:06 by zderfouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		nofn;
	t_list	*ptr2n;

	nofn = 0;
	ptr2n = lst;
	if (ptr2n == NULL)
		return (0);
	while (ptr2n != NULL)
	{
		ptr2n = ptr2n->next; 
		nofn++;
	}
	return (nofn);
}

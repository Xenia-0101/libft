/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:45:50 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:45:50 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		lst: The address of a pointer to a node.
		del: The address of the function used to delete
		the content of the node.

	Return value
		None

	External functs.
		free

	Description
		Deletes and frees the given node and every
		successor of that node, using the function ’del’
		and free(3).
		Finally, the pointer to the list must be set to
		NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

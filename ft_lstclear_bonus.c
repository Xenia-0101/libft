/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:21:02 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/26 19:21:02 by xvislock         ###   ########.fr       */
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
	if (!del)
		return ;
	if ((*lst)->next)
	{
		ft_lstclear(&(*lst)->next, del);
	}
	else
		ft_lstdelone(*lst, del);
	*lst = NULL;
}

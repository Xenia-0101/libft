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

static void	ft_lstrec(t_list **lst, void (*del)(void*))
{
	printf("\t\t %s\n", (char *)(*lst)->content);
	if ((*lst)->next)
		ft_lstrec(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!del)
		return ;
	// printf("Del function exists.\n");
	// printf("Content of the first node: %s\n", (char *)(*lst)->content);
	ft_lstrec(lst, del);
	return ;
}

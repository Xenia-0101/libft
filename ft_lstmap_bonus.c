/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:46:30 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:46:30 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		lst: The address of a pointer to a node.
		f: The address of the function used to iterate on
		the list.
		del: The address of the function used to delete
		the content of a node if needed.

	Return value
		The new list.
		NULL if the allocation fails.

	External functs.
		malloc, free

	Description
		Iterates the list ’lst’ and applies the function
		’f’ on the content of each node. Creates a new
		list resulting of the successive applications of
		the function ’f’. The ’del’ function is used to
		delete the content of a node if needed.
*/

// line 51 : do I need to create temp var t_lst = lst ?

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next_node;
	void	*new_cont;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	while (lst->next)
	{
		new_cont = f(lst->next->content);
		if (!new_cont)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		next_node = ft_lstnew(new_cont);
		ft_lstadd_back(&new_list, next_node);
		lst = lst->next;
	}
	return (new_list);
}

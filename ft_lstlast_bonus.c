/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:03:56 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/25 16:03:56 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	lst: The beginning of the list.

Return value
	Last node of the list

External functs.
	None

Description
	Returns the last node of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{ 
	if (!lst)
		return (NULL);
	if (lst->next)
	{
		while (lst->next)
			*lst = *lst->next;
	}
	return (lst);
}

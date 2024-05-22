/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:46:22 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:46:22 by xvislock         ###   ########.fr       */
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
	t_list	*t_lst;

	if (lst == NULL)
		return (NULL);
	t_lst = lst;
	while (t_lst->next != NULL)
	{
		t_lst = t_lst->next;
	}
	return (t_lst);
}

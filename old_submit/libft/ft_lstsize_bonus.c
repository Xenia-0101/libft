/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:46:44 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:46:44 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	lst: The beginning of the list.

Return value
	The length of the list

External functs.
	None

Description
	Counts the number of nodes in a list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*t_lst;

	count = 0;
	if (!lst)
		return (count);
	t_lst = lst;
	while (t_lst)
	{
		count++;
		t_lst = t_lst->next;
	}
	return (count);
}

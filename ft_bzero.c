/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:39:59 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 17:39:59 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The bzero() function erases the data in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros
	(bytes containing '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n-- > 0)
		temp[n] = '\0';
}

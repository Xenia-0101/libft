/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:27:17 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 11:27:17 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The memset() function fills the first n bytes of the memory
	area pointed to by s with the constant byte c.

RETURN VALUE
	The memset() function returns a pointer to the memory area s.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*temp;
	int		i;

	temp = (char *)str;
	i = 0;
	while (n-- > 0)
	{
		temp[i++] = c;
	}
	return (str);
}

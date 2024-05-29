/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:24:23 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 11:24:23 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The  memcpy()  function  copies  n  bytes from memory area
	src to memory area dest.  The memory areas must not overlap.

RETURN VALUE
	The memcpy() function returns a pointer to dest.

INFO REGARDING NULL POINTERS AS ARGS:
https://www.imperialviolet.org/2016/06/26/nonnull.html

 "If an argument to a function has an invalid value (such as a
 value outside the domain of the function, or a pointer outside
 the address space of the program, or a null pointer, or a
 pointer to non-modifiable storage when the corresponding
 parameter is not const-qualified) or a type (after promotion)
 not expected by a function with variable number of arguments,
 the behavior is undefined."
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp_d;
	char	*temp_s;
	size_t	i;

	temp_d = dest;
	temp_s = (char *)src;
	i = 0;
	if (!temp_d && !temp_s)
		return (NULL);
	while (i < n)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dest);
}

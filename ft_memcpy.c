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
*/

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *temp_d;
	char *temp_s;

	temp_d = (char *)dest;
	temp_s = (char *)src;
	while (n-- > 0)
	{
		*temp_d++ = *temp_s++;
	}
	return (dest);
}

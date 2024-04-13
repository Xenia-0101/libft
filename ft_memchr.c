/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:41:06 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 16:41:06 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
       The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of
       c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

RETURN VALUE
       The  memchr() function returns a pointer to the matching byte or NULL if the character does not
       occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *src;

	if (n != 0)
	{
		src = (const unsigned char *)s;
		while (n-- != 0)
		{
			if (*src++ == c)
				return ((void *)(src - 1));
		}
	}
	return (NULL);
}

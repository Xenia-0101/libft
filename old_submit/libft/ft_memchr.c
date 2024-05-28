/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:46:57 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:46:57 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The memchr() function scans the initial n bytes of the memory area pointed
	to by s for the first instance of c. Both c and the bytes of the memory area
	pointed to by s are interpreted as unsigned char.

RETURN VALUE
	The memchr() function returns a pointer to the matching byte or NULL if the
	character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		cc;
	int					i;

	i = 0;
	if (n != 0)
	{
		src = (const unsigned char *)s;
		cc = (unsigned char)c;
		while (n-- != 0)
		{
			if (src[i++] == (int )cc)
			{
				return ((void *)(src + i - 1));
			}
		}
	}
	return (NULL);
}

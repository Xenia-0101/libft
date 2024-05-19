/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:22:33 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 11:22:33 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The memccpy() function copies no more than n bytes from
	memory area src to memory area dest, stopping when the
	character c is found.

	If the memory areas overlap, the results are undefined.

RETURN VALUE
	The memccpy() function returns a pointer to the next
	character in dest after c, or NULL if c was not found
	in the first n characters of src.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*temp_d;
	const char	*temp_s;
	int			i;

	temp_d = (char *)dest;
	temp_s = (const char *)src;
	i = 0;

	while (n-- > 0)
	{
		temp_d[i] = temp_s[i];
		if (temp_s[i] == c)
		{
			i++;
			return (temp_d + i);
		}
		i++;
	}
	return (NULL);
}

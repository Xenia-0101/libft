/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:50:37 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 00:50:37 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This  function  appends the null-terminated string src to the string dest,
copying at most size-strlen(dest)-1 from src, and adds a terminating null byte
to the result, unless size is less than strlen(dest). This  function  fixes
the  buffer overrun problem of strcat(), but the caller must still handle the
possibility of data loss if size is too small.  The function returns the length
of the string strlcat() tried to  create;  if  the return  value is greater
than or equal to size, data loss occurred. If data loss matters, the caller must
either check the arguments before the call, or test the function return value.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	to_copy;
	int		i;

	if ((src == NULL && size == 0)
		|| (dest == NULL && size == 0))
		return (0);
	d_len = ft_strlen(dest);
	s_len = ft_strlen((char *)src);
	if (d_len >= size)
		return (s_len + size);
	to_copy = size - d_len - 1;
	i = 0;
	while (dest[i])
		i++;
	dest = dest + i;
	i = 0;
	while (src[i] && (to_copy-- != 0))
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (d_len + s_len);
}

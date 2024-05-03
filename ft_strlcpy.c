/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:11:18 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 14:11:18 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	This  function  is similar to strncpy(), but it copies at most size-1 bytes to dest, always adds a terminating
	null byte, and does not pad the destination with (further) null bytes.  This function fixes some of the  prob‐
	lems  of  strcpy() and strncpy(), but the caller must still handle the possibility of data loss if size is too
	small.  The return value of the function is the length of src, which allows truncation to be easily  detected:
	if  the  return  value  is  greater  than or equal to size, truncation occurred.  If loss of data matters, the
	caller must either check the arguments before the call, or test the function return value.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	s_len;

	s_len = 0;
	while (--size > 0 && *src)
	{
		*dest++ = *src++;
		s_len++;
	}
	*dest = '\0';
	return (s_len);
}

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
This  function  appends the null-terminated string src to the string dest, copying at most size-strlen(dest)-1
from src, and adds a terminating null byte to the result, unless size is less than strlen(dest). This  func‐
tion  fixes  the  buffer overrun problem of strcat(), but the caller must still handle the possibility of data
loss if size is too small.  The function returns the length of the string strlcat() tried to  create;  if  the
return  value is greater than or equal to size, data loss occurred.  If data loss matters, the caller must ei‐
ther check the arguments before the call, or test the function return value.
*/

#include <stdio.h>

static int	ft_strlen(char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	int		to_copy;

	d_len = ft_strlen(dest);
	s_len = ft_strlen((char *)src);
	to_copy = size - d_len - 1;
	while (*dest)
		dest++;
	while(*src && (to_copy-- > 0))
		*dest++ = *src++;
	*dest = '\0';
	return (d_len + s_len);
}

static int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

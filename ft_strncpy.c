/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:38:20 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/12 21:38:20 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The  strNcpy() function copies at most n bytes of src, including the
	terminating null byte ('\0'), to the buffer pointed to by dest. The strings
	may not overlap, and the destination string dest must be large enough
	to receive the copy. Warning: If there is no null byte among the first n
	bytes of src, the string placed	in dest will not be null-terminated.

	If the length of src is less than n, strncpy() writes additional null
	bytes to dest to ensure that a total  of n bytes are written.

RETURN VALUE
	The strncpy() functions return a pointer to the destination string dest.
NOTES
	One valid (and intended) use of strncpy() is to copy a C string to a
	fixed-length buffer while ensuring both	that the buffer is not overflowed
	and that unused bytes in the destination buffer are zeroed out
*/

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*t_dest;

	t_dest = dest;
	while (n-- > 0)
	{
		if (*src)
			*t_dest++ = *src++;
		else
			*t_dest++ = '\0';
	}
	return (dest);
}

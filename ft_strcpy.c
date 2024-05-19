/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:30:04 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/12 18:30:04 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The strcpy() function copies the string pointed to by src, including
		the terminating null byte ('\0'), to the buffer pointed to by dest.
		The strings may not overlap, and the destination string dest must be
		large enough to receive the copy. Beware of buffer overruns!
	RETURN VALUE
		strncpy() functions return a pointer to the destination string dest.
*/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

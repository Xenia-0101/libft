/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:18:07 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 13:18:07 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The strchr() function returns a pointer to the first occurrence of the character c in the string s.

Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE
The strchr() function returns a pointer to the matched character or NULL if the character is not
found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these
functions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)s + ft_strlen((char *)s));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:36:51 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/18 17:36:51 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function name
	ft_substr

Prot
	char *ft_substr(char const *s, unsigned int start, size_t len);

Parameters s:
	The string from which to create the substring.
	start: The start index of the substring in the string ’s’.
	len: The maximum length of the substring.

Return value
	The substring.
	NULL if the allocation fails.

External functs.
	malloc

Description
	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	char *t_sub;
	if (len == 0 || ft_strlen((char *)s) < (int)start + 1)
		return (NULL);
	sub = ft_calloc(len + 1, sizeof (char));
	if (!sub)
		return (NULL);
	t_sub = sub;
	while (len-- && s[start])
	{
		*t_sub++ = s[start++];
	}
	*t_sub = '\0';
	return (sub);
}

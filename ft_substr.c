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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (start + 1 == 0)
		return (ft_calloc(0, 0));
	if (len == 0 || ft_strlen((char *)s) < (int)start + 1)
		return (ft_calloc(0, 0));
	if (len > (size_t)ft_strlen((char *)(s + start)))
		len = (size_t)ft_strlen((char *)(s + start));
	sub = malloc(sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	ft_bzero(sub, len + 1);
	ft_memcpy(sub, s + start, len);
	return (sub);
}

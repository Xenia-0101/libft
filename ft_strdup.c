/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:23:11 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/14 19:23:11 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The  strdup() function returns a pointer to a new string which is a duplicate of the string s.  Memory for the
		new string is obtained with malloc(3), and can be freed with free(3).
*/

#include "libft.h"


char *ft_strdup(const char *s)
{
	char *dup;
	int len;

	len = ft_strlen((char *)s);

	dup = ft_calloc(sizeof (char), len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}

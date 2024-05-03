/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:11:10 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/18 20:11:10 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s1: The string to be trimmed.
	set: The reference set of characters to t_trim.

Return value
	The trimmed string.
	NULL if the allocation fails.

External functs.
	malloc

Description
	Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.
*/

#include "libft.h"

static int	char_in_set(char a, const char *set)
{
	while (*set)
	{
		if (a == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*t_trim;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (char_in_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (char_in_set(s1[end - 1], set))
		end--;
	trim = ft_calloc(end - start + 1, sizeof (char));
	if (!trim)
		return (NULL);
	t_trim = trim;
	while (start < end)
		*t_trim++ = s1[start++];
	*t_trim = '\0';
	return (trim);
}

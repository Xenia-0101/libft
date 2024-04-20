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

#include <stdio.h>
#include <stdlib.h>

static int	char_in_set(char a, const char *set)
{
	while (*set)
	{
		if (a == *set++)
			return (1);
	}
	return (0);
}

static int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
static void	ft_bzero(void *s, size_t n)
{
	char *temp;

	temp = (char *)s;
	while (n-- > 0)
		*temp++ = '\0';
}

static void	*ft_calloc(size_t elc, size_t els)
{
	void *ptr;

	if (elc == 0 || els == 0)
		elc = els = 1;
	ptr = malloc(elc * els);
	if (ptr)
		ft_bzero(ptr, elc * els);
	return (ptr);
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
	end = ft_strlen(s1);
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

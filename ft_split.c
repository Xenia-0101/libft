/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:31:06 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 20:31:06 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		s: The string to be split.
		c: The delimiter character.

	Return value
		The array of new strings resulting from the split.
		NULL if the allocation fails.

	External functs.
		malloc, free

	Description
		Allocates (with malloc(3)) and returns an array
		of strings obtained by splitting ’s’ using the
		character ’c’ as a delimiter.
*/

#include "stdio.h"

static int count_char(const char *s, char c);
static void *ft_calloc(size_t elc, size_t els);
static void	*ft_memcpy(void *dest, const void *src, size_t n);

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		x;

	split = ft_calloc(count_char(s, c) + 1, sizeof (char *));
	if (!split)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
		}
		split[x] = ft_calloc(i - j + 1, sizeof (char));
		ft_memcpy(split[x++], (s + j), i - j);
		if (!s[i++])
			break;
	}
	return (split);
}

static int count_char(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s++ == c)
			count++;
	}
	return (count);
}

static void *ft_calloc(size_t elc, size_t els)
{
	void	*ptr;
	char	*t_ptr;
	int		c;

	if (elc == 0 || els == 0)
		elc = els = 1;
	c = elc * els;
	ptr = malloc(c);
	if (!ptr)
		return (NULL);
	t_ptr = ptr;
	while (c-- != 0)
		t_ptr[c] = '\0';
	return (ptr);
}

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *temp_d;
	char *temp_s;

	temp_d = (char *)dest;
	temp_s = (char *)src;
	while (n-- > 0)
	{
		*temp_d++ = *temp_s++;
	}
	*temp_d = '\0';
	return (dest);
}


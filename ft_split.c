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

static int ft_strlen(const char *s)
{
	int count;

	count = 0;
	while (*s++)
	{
		count++;
	}
	return (count);
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
	ptr = malloc(elc * els);
	if (!ptr)
		return (NULL);
	c = elc * els;
	t_ptr = ptr;
	while (c-- > 0)
		*t_ptr++ = '\0';
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

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*temp;
	int		s_len;
	int		subs_count;
	int		i;
	int		j;

	s_len = ft_strlen(s);
	subs_count = count_char(s, c) + 1;
	split = ft_calloc(subs_count + 1, sizeof (char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			temp = ft_calloc(s_len, sizeof (char));
			j = 0;
			while (*s && *s != c)
			{
				temp[j++] = *s++;
			}
		}
		split[i] = ft_calloc(j + 1, sizeof (char));
		ft_memcpy(split[i], temp, j);
		free(temp);
		s++;
		i++;
	}
	return (split);
}


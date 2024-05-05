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

#include "libft.h"

void	free_arr(char **res, size_t count)
{
	size_t	i;

	while (count-- > 0)
	{
		i = 0;
		while (*(res[count] + i))
		{
			*(res[count] + i) = '\0';
			i++;
		}
		free(res[count]);
	}
	free(res);
}

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
		s++;
	if (!*s)
		return (-1);
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			count++;
		s++;
	}
	return (count + 1);
}

void	all_cpy_word(char **res, const char *s, char c, size_t count)
{
	char	*w_start;
	int		w_len;
	size_t	i;

	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		w_start = (char *)s;
		w_len = 0;
		while (*s && *s != c)
		{
			w_len++;
			s++;
		}
		*(res + i) = ft_calloc(w_len + 1, sizeof (char));
		if (!(res + i))
		{
			free_arr(res, count);
		}
		ft_memcpy(*(res + i), w_start, w_len);
		i++;
	}
	if (!(res + i))
		{
			free_arr(res, count);
		}
}

char	**ft_split(char const *s, char c)
{
	int	word_count;
	char	**res;

	word_count = count_words(s, c);
	if (word_count == -1)
	{
		res = ft_calloc(0, 0);
		return (res);
	}
	res = ft_calloc(sizeof (char *), word_count + 1);
	if (!res)
		return (NULL);
	all_cpy_word(res, s, c, word_count);
	return (res);
}

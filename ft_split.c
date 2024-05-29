/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:43:59 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:43:59 by xvislock         ###   ########.fr       */
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

// void	free_arr(char **res, size_t count)
// {
// 	size_t	i;

// 	while (count-- > 0)
// 	{
// 		i = 0;
// 		while (*(res[count] + i))
// 		{
// 			*(res[count] + i) = '\0';
// 			i++;
// 		}
// 		free(res[count]);
// 	}
// 	free(res);
// }

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

int	skip_separator(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

void	ft_split_arr(char **res, char const *s, char c, int count)
{
	int	i;
	int	j;

	j = 0;
	while (j < count)
	{
		i = 0;
		s += skip_separator(s, c);
		while (s[i] && s[i] != c)
			i++;
		res[j] = (char *)ft_calloc(i + 1, sizeof (char));
		ft_memcpy(res[j], s, i);
		j++;
		s += i;
	}
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**res;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_calloc(1, sizeof (char *)));
	word_count = count_words(s, c);
	if (word_count == -1)
	{
		return (ft_calloc(1, sizeof (char *)));
	}
	res = ft_calloc(word_count + 1, sizeof (char *));
	if (!res)
		return (NULL);
	ft_split_arr(res, s, c, word_count);
	return (res);
}

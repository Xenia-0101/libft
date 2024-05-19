/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:37:57 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/18 18:37:57 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		s1: The prefix string.
		s2: The suffix string.

	Return value
		The new string.
		NULL if the allocation fails.

	External functs.
		malloc

	Description
		Allocates (with malloc(3)) and returns a new
		string, which is the result of the concatenation
		of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*t_join;
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	join = ft_calloc(s1_len + s2_len + 1, sizeof (char));
	if (!join)
		return (NULL);
	t_join = join;
	i = 0;
	while (s1[i])
	{
		t_join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		t_join[i++] = s2[j++];
	return (join);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:05:04 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/22 17:05:04 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		s: The string on which to iterate.
		f: The function to apply to each character.

	Return value
		The string created from the successive applications
		of ’f’.

	Returns
		NULL if the allocation fails.

	External functs.
		malloc

	Description
		Applies the function ’f’ to each character of the
		string ’s’, and passing its index as first argument
		to create a new string (with malloc(3)) resulting
		from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_map;
	int	i;

	s_map = ft_calloc(ft_strlen((char *)s) + 1, sizeof (char));
	if (!s_map)
		return (NULL);
	i = 0;
	while (i < ft_strlen((char *)s))
	{
		s_map[i] = f(i, s[i]);
		i++;
	}
	s_map[i] = '\0';
	return (s_map);
}

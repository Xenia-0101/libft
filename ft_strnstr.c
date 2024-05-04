/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:34:59 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 22:34:59 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strnstr() function locates the first occurrence of the  null-termi-
	nated  string little in the string big, where not more than len charac-
	ters are searched.  Characters that appear after a `\0' character  are
	not  searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t len;
	size_t t_n;
	size_t counter;

	if (!*little)
		return ((char *)big);
	len = ft_strlen((char *)little);
	t_n = n;
	counter = 0;
	while (*big && n-- > 0)
	{
		if ((!ft_strncmp(little, big, len)) && !(counter + len > t_n))
			return ((char *)big);
		else
		{
			big++;
			counter++;
		}
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	const char	*b;
	const char	*l;

	if (!*little)
		return ((char *)big);
	l = little;
	while (*big && n-- > 0)
	{
		b = big;
		if (*big == *l)
		{
			while (*big++ == *l++)
			{
				if (!*l)
					return ((char *)b);
				if (n-- == 0)
					return (NULL);
			}
			l = little;
		}
		else
			big++;
	}
	return (NULL);
} */

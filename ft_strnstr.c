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

#include <stdio.h>

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
}

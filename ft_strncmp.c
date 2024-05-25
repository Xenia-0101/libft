/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:43:26 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 15:43:26 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strncmp() function compares the first (at most) n bytes of s1 and s2.
	The locale is not taken into account.
	The comparison is done using unsigned characters.
RETURN VALUE
	The strncmp() function returns an integer less than, equal to, or greater
	than zero if s1 (or the first n bytes thereof) is found, respectively,
	to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n != 0)
	{
		while (n > 0)
		{
			if (((unsigned char)s1[i] != (unsigned char)s2[i]) || !(unsigned char)s1[i])
				return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
			i++;
			n--;
		}
	}
	return (0);
}

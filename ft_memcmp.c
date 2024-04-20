/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:12:10 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 17:12:10 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The  memcmp()  function  compares the first n bytes (each interpreted as unsigned char) of the memory areas s1
	and s2.

RETURN VALUE
	The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of  s1
	is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.

	For  a  nonzero  return  value, the sign is determined by the sign of the difference between the first pair of
	bytes (interpreted as unsigned char) that differ in s1 and s2.

	If n is zero, the return value is zero.
*/

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *t1;
	unsigned const char *t2;

	if (n == 0)
		return (0);
	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (*t1 && n-- > 0)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
	}
	return (*t1 - *t2);
}

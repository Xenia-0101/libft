/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:47:05 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 15:47:05 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
	Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE
	The strrchr() function returns a pointer to the matched character or NULL if the character is not
	found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these
	functions return a pointer to the terminator.
*/

#include <stdio.h>

static int	fft_strlen(char *str);

char	*ft_strrchr(const char *s, int c)
{
	const char	*t_s;

	t_s = NULL;
	if (c == '\0')
		return ((char *)s + fft_strlen((char *)s));
	while (*s)
	{
		if (*s == c)
			t_s = s;
		s++;
	}
	return ((char *)t_s);
}

static int	fft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}


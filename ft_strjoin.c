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

#include <stdio.h>
#include <stdlib.h>

static void *ft_calloc(size_t elc, size_t els);
static int	ft_strlen(char *str);
static void	ft_bzero(void *s, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*t_join;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	join = ft_calloc(s1_len + s2_len + 1, sizeof (char));
	if (!join)
		return (NULL);
	t_join = join;
	while (*s1)
		*t_join++ = *s1++;
	while (*s2)
		*t_join++ = *s2++;
	return (join);
}

static void *ft_calloc(size_t elc, size_t els)
{
	void	*ptr;

	if (elc == 0 || els == 0)
		elc = els = 1;
	ptr = malloc(elc * els);
	if (ptr)
		ft_bzero(ptr, elc * els);
	return (ptr);
}

static int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

static void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n-- > 0)
		*temp++ = '\0';
}

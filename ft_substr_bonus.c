/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:36:51 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/18 17:36:51 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name
	ft_substr

Prot
	char *ft_substr(char const *s, unsigned int start, size_t len);

Parameters s:
	The string from which to create the substring.
	start: The start index of the substring in the string ’s’.
	len: The maximum length of the substring.

Return value
	The substring.
	NULL if the allocation fails.

External functs.
	malloc

Description
	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins
*/

#include <stdio.h>
#include <stdlib.h>

static void *ft_calloc(size_t elc, size_t els);
static void	ft_bzero(void *s, size_t n);
static int	ft_strlen(char *str);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	char *t_sub;
	if (len == 0 || ft_strlen((char *)s) < (int)start + 1)
		return (NULL);
	sub = ft_calloc(len + 1, sizeof (char));
	if (!sub)
		return (NULL);
	t_sub = sub;
	while (len-- && s[start])
	{
		*t_sub++ = s[start++];
	}
	*t_sub = '\0';
	return (sub);
}

static int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

static void	ft_bzero(void *s, size_t n)
{
	char *temp;

	temp = (char *)s;
	while (n-- > 0)
		*temp++ = '\0';
}

static void *ft_calloc(size_t elc, size_t els)
{
	void *ptr;

	if (elc == 0 || els == 0)
		elc = els = 1;
	ptr = malloc(elc * els);
	if (ptr)
		ft_bzero(ptr, elc * els);
	return (ptr);
}

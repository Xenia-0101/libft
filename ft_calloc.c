/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:53:38 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/14 15:53:38 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer
	to the allocated memory.  The memory is set to zero.  If nmemb or size is  0,  then  calloc()  returns  either
	NULL,  or  a  unique  pointer value that can later be successfully passed to free().  If the multiplication of
	nmemb and size would result in integer overflow, then calloc() returns an  error.   By  contrast,  an  integer
	overflow  would  not  be detected in the following call to malloc(), with the result that an incorrectly sized
	block of memory would be allocated:

		malloc(nmemb * size);
*/

#include "libft.h"

void *ft_calloc(size_t elc, size_t els)
{
	void	*ptr;
	char	*t_ptr;
	int		c;

	if (elc == 0 || els == 0)
		elc = els = 1;
	c = elc * els;
	ptr = malloc(c);
	if (!ptr)
		return (NULL);
	t_ptr = ptr;
	while (c-- != 0)
		t_ptr[c] = '\0';
	return (ptr);
}

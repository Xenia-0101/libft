/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:24:48 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 11:24:48 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		The memmove() function copies n bytes from memory area src to
		memory area dest. The memory areas may overlap: copying takes
		place as though the bytes in src are first copied into a
		temporary array that does not overlap src or dest, and the bytes
		are then copied from the temporary array to dest.

	RETURN VALUE
		The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*t_src;
	char	*t_dest;
	size_t	i;

	t_src = (char *)src;
	t_dest = (char *)dest;
	if (t_dest < t_src)
	{
		i = 0;
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- != 0)
		{
			t_dest[i] = t_src[i];
		}
	}
	return (dest);
}

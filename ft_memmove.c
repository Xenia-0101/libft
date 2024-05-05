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
	char	temp[50];

	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	return (dest);
}

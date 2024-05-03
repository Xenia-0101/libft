/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:40:16 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/22 19:40:16 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		s: The string on which to iterate.
		f: The function to apply to each character.

	Return value
		None

	External functs.
		None

	Description
		Applies the function ’f’ on each character of
		the string passed as argument, passing its index
		as first argument. Each character is passed by
		address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

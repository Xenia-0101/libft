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

#include "libft.h"

static int	abs_val(int n)
{
	if (n < 0)
		return (n *= -1);
	return (n);
}

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n != 0)
	{
		while (n-- > 0)
		{
			if ((s1[i] != s2[i]) || !s1[i])
				return (abs_val(s1[i]) - abs_val(s2[i]));
			i++;
		}
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	len;
	size_t	t_n;
	size_t	counter;
	int		i;

	if (!*little)
		return ((char *)big);
	len = ft_strlen((char *)little);
	t_n = n;
	counter = 0;
	i = 0;
	while (big[i] && n-- > 0)
	{
		if ((!ft_strncmp(little, (big + i), len)) && !(counter + len > t_n))
			return ((char *)(big + i));
		else
		{
			i++;
			counter++;
		}
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:02:58 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/21 13:02:58 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		n: the integer to convert.

	Return value
		The string representing the integer.
		NULL if the allocation fails.

	External functs.
		malloc

	Description
		Allocates (with malloc(3)) and returns a string
		representing the integer received as an argument.
		Negative numbers must be handled.
*/

#include <stdio.h>

static void *ft_calloc(size_t elc, size_t els)
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

static int	count_units(int n)
{
	int units;

	units = 0;
	if (n < 0)
	{
		n *= -1;
		units++;
	}
	while (n > 0)
	{
		units++;
		n /= 10;
	}
	return (units);
}

static char *min_number(void)
{
	char *res;

	res = ft_calloc(12, sizeof (char));
	if (!res)
		return (NULL);
	res[0] = '-';
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	return (res);
}

char	*ft_itoa(int n)
{
	int units;
	char *res;

	if (n == 0)
	{
		res = ft_calloc(2, sizeof (char));
		res[0] = '0';
		return (res);
	}
	if (n == -2147483648)
	{
		res = min_number();
		return (res);
	}
	units = count_units(n);
	if (n < 0)
		n *= -1;
	res = ft_calloc(units + 1, sizeof (char));
	if (!res)
		return (NULL);
	while (n > 0)
	{
		res[--units] = (n % 10) + '0';
		n /= 10;
	}
	if (units)
		res[--units] = '-';
	return (res);
}

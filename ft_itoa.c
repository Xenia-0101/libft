/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:45:26 by xvislock          #+#    #+#             */
/*   Updated: 2024/05/22 18:45:26 by xvislock         ###   ########.fr       */
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

#include "libft.h"

static void	count_units(int num, int *units)
{
	while (num > 0)
	{
		num /= 10;
		(*units)++;
	}
}

static char	*itoa_min_int(void)
{
	char	*res;

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

static char	*itoa_zero(void)
{
	char	*res;

	res = ft_calloc(2, sizeof (char));
	if (!res)
		return (NULL);
	res[0] = '0';
	return (res);
}

static void	itoa_num(int num, int units, char **res)
{
	while (num > 0)
	{
		res[0][units - 1] = num % 10 + '0';
		num /= 10;
		units--;
	}
	if (units)
	{
		res[0][0] = '-';
	}
}

char	*ft_itoa(int n)
{
	int		units;
	char	*res;

	if (n == 0)
	{
		return (itoa_zero());
	}
	if (n == -2147483648)
	{
		return (itoa_min_int());
	}
	units = 0;
	if (n < 0)
	{
		units++;
		n *= -1;
	}
	count_units(n, &units);
	res = ft_calloc(units + 1, sizeof (char));
	if (!res)
		return (NULL);
	itoa_num(n, units, &res);
	return (res);
}

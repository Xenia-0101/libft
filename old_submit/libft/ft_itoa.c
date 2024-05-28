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

static int	count_units(int num)
{
	int	count;

	count = 0;
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

// static void	itoa_num(int num, int units, char **res)
// {
// 	while (num > 0)
// 	{
// 		res[0][units - 1] = num % 10 + '0';
// 		num /= 10;
// 		units--;
// 	}
// 	if (units)
// 	{
// 		res[0][0] = '-';
// 	}
// }

char	*ft_itoa(int n)
{
	int		digits;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = count_units(n);
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	res = ft_calloc(digits + 1, sizeof (char));
	if (!res)
		return (NULL);
	while (n > 0)
	{
		res[digits - 1] = (n % 10) + '0';
		n /= 10;
		digits--;
	}
	if (digits)
		res[digits - 1] = '-';
	return (res);
}

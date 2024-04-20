/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:39:28 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 17:39:28 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c);
static int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*nptr && ft_isspace(*nptr))
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		res = 10 * res + (*nptr - '0');
		nptr++;
	}
	return (res * sign);
}

static int	ft_isspace(int c)
{
	return ((c == '\f') | (c == '\n') | (c == '\r') |
			(c == '\t') | (c == '\v') | (c == ' '));
}

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include "libft.h"

static int ft_isspace(int c)
{
	if ((c == '\f') | (c == '\n') | (c == '\r') | (c == '\t') | (c == '\v') | (c == ' '))
		return (1);
	return (0);
}


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

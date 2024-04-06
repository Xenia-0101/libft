#include "libft.h"

int ft_isspace(int c)
{
	if ((c == '\f') | (c == '\n') | (c == '\r') | (c == '\t') | (c == '\v') | (c == ' '))
		return (1);
	return (0);
}

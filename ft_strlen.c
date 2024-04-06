#include "libft.h"

int ft_strlen(char *str)
{
	int count;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

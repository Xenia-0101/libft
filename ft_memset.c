#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	char *temp;

	temp = (char *)str;
	while (n > 0)
	{
		*temp = c;
		n--;
		temp++;
	}
	return (str);
}

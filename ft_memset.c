#include "libft.h"

/*
DESCRIPTION
	The memset() function fills the first n bytes of the memory
	area pointed to by s with the constant byte c.

RETURN VALUE
	The memset() function returns a pointer to the memory area s.
*/

void	*ft_memset(void *str, int c, size_t n)
{
	char *temp;

	temp = (char *)str;
	while (n-- > 0)
	{
		*temp++ = c;
	}
	return (str);
}

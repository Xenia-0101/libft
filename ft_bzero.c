#include "libft.h"

/*
	The bzero() function erases the data in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros
	(bytes containing '\0') to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	char *temp;

	temp = (char *)s;
	while (n-- > 0)
		*temp++ = '\0';
}

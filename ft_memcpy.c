#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *temp_d;
	char *temp_s;

	temp_d = (char *)dest;
	temp_s = (char *)src;
	while (n-- > 0)
	{
		*temp_d++ = *temp_s++;
	}
	return (dest);

}

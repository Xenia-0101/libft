#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	/*
	DESCRIPTION
		The  memcpy()  function  copies  n  bytes from memory area
		src to memory area dest.  The memory areas must not overlap.

	RETURN VALUE
		The memcpy() function returns a pointer to dest.
	 */
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

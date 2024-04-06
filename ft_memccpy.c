#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	/*
	DESCRIPTION
		The memccpy() function copies no more than n bytes from
		memory area src to memory area dest, stopping when the
		character c is found.

		If the memory areas overlap, the results are undefined.

	RETURN VALUE
		The memccpy() function returns a pointer to the next
		character in dest after c, or NULL if c was not found
		in the first n characters of src.
	*/
	char *temp_d;
	char *temp_s;

	temp_d = (char *)dest;
	temp_s = (char *)src;
	while (n > 0)
	{
		*temp_d = *temp_s;
		temp_d++;
		temp_s++;
		if (*temp_s == c)
			return (temp_d++);
	}
	return (NULL);
}

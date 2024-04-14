#include "libft.h"

/*
DESCRIPTION
	The strncmp() function compares the first (at most) n bytes of s1 and s2.  The locale is not taken into account.
	The comparison is done using unsigned characters.
RETURN VALUE
	The strncmp() function returns an integer less than, equal to, or greater than zero if s1 (or the
	first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{

	while (n-- > 0 && *s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

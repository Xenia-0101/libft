
#include "tests.h"
#include "../ft_memccpy.c"
#include <ctype.h>

void test_ft_memccpy(void)
{
	const char *src = "hello";
	char dest[sizeof (src)];
	char t_dest[sizeof (src)];

	ft_memccpy(dest, "hello", 'l', 5);
	memccpy(t_dest, "hello", 'l', 5);
	printf("%s\n", dest);
	printf("%s\n", t_dest);
}

void tests_ft_memccpy(void)
{
	printf("tests for memccpy not finished\n");
	test_ft_memccpy();
}

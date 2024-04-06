
#include "tests.h"
#include "../ft_memccpy.c"

void test_ft_memccpy(void)
{
	char dest[50];
	char t_dest[50];

	// ft_memccpy(dest, "hello", 'l', 5);
	memccpy(t_dest, "hello", 'l', 5);
	printf("%s\n", dest);
	printf("%s\n", t_dest);
}

void tests_ft_memccpy(void)
{
	printf("tests for memccpy not finished\n");
	test_ft_memccpy();
}


#include "tests.h"
#include "../ft_memcpy.c"

void test_ft_memcpy(void) {
	char dest[50];
	char t_dest[50];

	ft_memcpy(dest, "Hello", 5);
	memcpy(t_dest, "Hello", 5);
	printf("%s\n", dest);
	printf("%s\n", t_dest);
}

void tests_ft_memcpy(void) {
	printf("tests for memcpy not finished\n");
	test_ft_memcpy();
	char *s1 = NULL;
	char *s2 = NULL;
	printf("\n%s\n", (char *)memcpy(s1, s2, 8));
}

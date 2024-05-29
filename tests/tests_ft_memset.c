
#include "tests.h"
#include "../ft_memset.c"

// void *ft_memset(void *str, int c, size_t n)
void test_ft_memset_1(void) {
	char str[] = "Hello World.";
	ft_memset(str, 'x', 4);
	printf("%s\n", str);
}

void test_ft_memset_2(void) {
	char str[] = "Hello World.";
	ft_memset(str, 'x', 1);
	printf("%s\n", str);
}

void test_ft_memset_3(void) {
	char str[] = "Hello World.";
	ft_memset(str, 'x', 0);
	printf("%s\n", str);
}


void tests_ft_memset(void) {
	test_ft_memset_1();
	test_ft_memset_2();
	test_ft_memset_3();
}

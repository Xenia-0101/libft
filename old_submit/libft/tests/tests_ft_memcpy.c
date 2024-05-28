
#include "tests.h"
#include "../ft_memcpy.c"

// basic test
void test_ft_memcpy(void) {
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, "Hello", 5);
	memcpy(t_dest, "Hello", 5);
	if (!strcmp(dest, t_dest))
		tests__print("ft_memcpy(dest, Hello, 5)", 1);
	else
		tests__print("ft_memcpy(dest, Hello, 5)", 0);
	printf("exp:\t%s\n", t_dest);
	printf("res:\t%s\n", dest);
}

void test_ft_memcpy_1(void) {
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, "Hello", 7);
	memcpy(t_dest, "Hello", 7);
	if (!strcmp(dest, t_dest))
		tests__print("ft_memcpy(dest, Hello, 7)", 1);
	else
		tests__print("ft_memcpy(dest, Hello, 7)", 0);
	printf("exp:\t%s\n", t_dest);
	printf("res:\t%s\n", dest);
}

void test_ft_memcpy_11(void) {
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, "Hello", 2);
	memcpy(t_dest, "Hello", 2);
	if (!strcmp(dest, t_dest))
		tests__print("ft_memcpy(dest, Hello, 2)", 1);
	else
		tests__print("ft_memcpy(dest, Hello, 2)", 0);
	printf("exp:\t%s\n", t_dest);
	printf("res:\t%s\n", dest);
}

// copy empty string
void test_ft_memcpy_2(void)
{
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, "", 4);
	memcpy(t_dest, "", 4);
	if (!strcmp(dest, t_dest))
		tests__print("ft_memcpy(dest, , 4)", 1);
	else
		tests__print("ft_memcpy(dest, , 4)", 0);
	printf("exp:\t%s\n", t_dest);
	printf("res:\t%s\n", dest);\
}

// copy null pointer
void test_ft_memcpy_3(void)
{
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);
	char *src = ft_calloc(0, 0);

	ft_memcpy(dest, src, 4);
	memcpy(t_dest, src, 4);
	if (!strcmp(dest, t_dest))
		tests__print("ft_memcpy(dest, src, 4)", 1);
	else
		tests__print("ft_memcpy(dest, src, 4)", 0);
	printf("exp:\t%s\n", t_dest);
	printf("res:\t%s\n", dest);\
}

// this should crash -- NULL as src
void test_ft_memcpy_5(void)
{
	char *dest = ft_calloc(0, 0);
	// char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, NULL, 4);
	// memcpy(NULL, NULL, 4);
	// printf(">>%s<<\n", dest);
	// printf(">>%s<<\n", t_dest);
}

void tests_ft_memcpy(void) {
	printf("tests for memcpy not finished\n");
	test_ft_memcpy();
	test_ft_memcpy_1();
	test_ft_memcpy_11();
	test_ft_memcpy_2();
	test_ft_memcpy_3();
}

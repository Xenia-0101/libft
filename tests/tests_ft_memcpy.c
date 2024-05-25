
#include "tests.h"
#include "../ft_memcpy.c"

// basic test
void test_ft_memcpy(void) {
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, "Hello", 5);
	memcpy(t_dest, "Hello", 5);
	printf("%s\n", dest);
	printf("%s\n", t_dest);
}

// copy empty string
void test_ft_memcpy_2(void)
{
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);

	ft_memcpy(dest, "", 4);
	memcpy(t_dest, "", 4);
	printf(">>%s<<\n", dest);
	printf(">>%s<<\n", t_dest);
}

// copy null pointer
void test_ft_memcpy_3(void)
{
	char *dest = ft_calloc(0, 0);
	char *t_dest = ft_calloc(0, 0);
	char *src = ft_calloc(0, 0);

	ft_memcpy(dest, src, 4);
	memcpy(t_dest, src, 4);
	printf(">>%s<<\n", dest);
	printf(">>%s<<\n", t_dest);
}

// this should not crash -- NULL as both params
void test_ft_memcpy_4(void)
{
	// char *dest = ft_calloc(0, 0);
	// char *t_dest = ft_calloc(0, 0);

	ft_memcpy(NULL, NULL, 4);
	// memcpy(NULL, NULL, 4);
	// printf(">>%s<<\n", dest);
	// printf(">>%s<<\n", t_dest);
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
	test_ft_memcpy_4();
}

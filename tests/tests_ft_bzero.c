
#include "tests.h"
#include "../ft_bzero.c"

static int check_string(void *str) {
	char *temp;
	temp = (char *)str;

	while(*temp)
		return (1);
	return (0);
}

void test_ft_bzero_1(void) {

	char str[] = "Hello World";
	ft_bzero(str, 11);
	if (check_string(str))
		tests__print("test_ft_bzero_1", 0);
	else
		tests__print("test_ft_bzero_1", 1);
}

void tests_ft_bzero(void) {
	test_ft_bzero_1();
}

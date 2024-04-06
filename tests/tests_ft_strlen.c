
#include "tests.h"
#include "../ft_strlen.c"

void test_ft_strlen_1(void) {
	int passed;
	int res;

	res = ft_strlen("Hello");
	passed = 1;
	if (res != 5)
		passed = 0;
	tests__print("test_ft_strlen_1", passed);
}

void test_ft_strlen_2_empty(void) {
	int passed;
	int res;

	res = ft_strlen("");
	passed = 1;
	if (res != 0)
		passed = 0;
	tests__print("test_ft_strlen_2_empty", passed);
}

void test_ft_strlen_3_space(void) {
	int passed;
	int res;

	res = ft_strlen("   ");
	passed = 1;
	if (res != 3)
		passed = 0;
	tests__print("test_ft_strlen_3_space", passed);
}

void test_ft_strlen_4_long(void) {
	int passed;
	int res;

	res = ft_strlen("Don’t you wish they made a clap-on-clap-off device for some people’s mouths?");
	passed = 1;
	if (res != 80)
		passed = 0;
	tests__print("test_ft_strlen_4_long", passed);
}

void tests_ft_strlen(void) {
	test_ft_strlen_1();
	test_ft_strlen_2_empty();
	test_ft_strlen_3_space();
	test_ft_strlen_4_long();
}

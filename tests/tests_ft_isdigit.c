
#include "tests.h"
#include "../ft_isdigit.c"

void test_ft_isdigit_1_0(void) {
	int passed;
	int c = '0';
	int res = ft_isdigit(c);

	passed = 1;
	if (res != 1)
		passed = 0;
	tests__print("test_ft_isdigit_1_0", passed);
}

void test_ft_isdigit_2_9(void) {
	int passed;
	int c = '9';
	int res = ft_isdigit(c);

	passed = 1;
	if (res != 1)
		passed = 0;
	tests__print("test_ft_isdigit_2_9", passed);
}

void test_ft_isdigit_3_slash(void) {
	int passed;
	int c = '/';
	int res = ft_isdigit(c);

	passed = 1;
	if (res != 0)
		passed = 0;
	tests__print("test_ft_isdigit_3_slash", passed);
}

void test_ft_isdigit_4_dots(void) {
	int passed;
	int c = ':';
	int res = ft_isdigit(c);

	passed = 1;
	if (res != 0)
		passed = 0;
	tests__print("test_ft_isdigit_4_dots", passed);
}

void tests_ft_isdigit(void) {
	test_ft_isdigit_1_0();
	test_ft_isdigit_2_9();
	test_ft_isdigit_3_slash();
	test_ft_isdigit_4_dots();
}

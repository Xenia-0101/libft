
#include "tests.h"
#include "../ft_atoi.c"

void test_ft_atoi_1_minus(void) {
	const char *str = "-42";
	int res = ft_atoi(str);
	if (res != -42)
		tests__print("test_ft_atoi_1_minus", 0);
	else
		tests__print("test_ft_atoi_1_minus", 1);
}

void test_ft_atoi_2_minus_minus(void) {
	const char *str = "--42";
	int res = ft_atoi(str);
	if (res != 0)
		tests__print("test_ft_atoi_2_minus_minus", 0);
	else
		tests__print("test_ft_atoi_2_minus_minus", 1);
}

void test_ft_atoi_3_plus(void) {
	const char *str = "+42";
	int res = ft_atoi(str);
	if (res != 42)
		tests__print("test_ft_atoi_3_plus", 0);
	else
		tests__print("test_ft_atoi_3_plus", 1);
}

void test_ft_atoi_4_plus_plus(void) {
	const char *str = "++42";
	int res = ft_atoi(str);
	if (res != 0)
		tests__print("test_ft_atoi_4_plus_plus", 0);
	else
		tests__print("test_ft_atoi_4_plus_plus", 1);
}

void test_ft_atoi_5_space_before(void) {
	const char *str = "		 42";
	int res = ft_atoi(str);
	if (res != 42)
		tests__print("test_ft_atoi_5_space_before", 0);
	else
		tests__print("test_ft_atoi_5_space_before", 1);
}

void test_ft_atoi_6_space_middle(void) {
	const char *str = "42 548";
	int res = ft_atoi(str);
	if (res != 42)
		tests__print("test_ft_atoi_6_space_middle", 0);
	else
		tests__print("test_ft_atoi_6_space_middle", 1);
}

void test_ft_atoi_7_chars_after(void) {
	const char *str = "-42.*--654";
	int res = ft_atoi(str);
	if (res != -42)
		tests__print("test_ft_atoi_7_chars_after", 0);
	else
		tests__print("test_ft_atoi_7_chars_after", 1);
}

void test_atoi_one(char *input, char *exp)
{
	printf("input:\t>>%s<<\n\texp:\t>>%s<<\n\tres:\t>>%d<<\n", input, exp, ft_atoi(input));
}

void tests_ft_atoi(void) {
	// test_ft_atoi_1_minus();
	// test_ft_atoi_2_minus_minus();
	// test_ft_atoi_3_plus();
	// test_ft_atoi_4_plus_plus();
	// test_ft_atoi_5_space_before();
	// test_ft_atoi_6_space_middle();
	// test_ft_atoi_7_chars_after();
	test_atoi_one("   --42", "0");
	test_atoi_one("   -42", "-42");
	test_atoi_one("   +42", "42");
	test_atoi_one("   ++42", "0");
	test_atoi_one("   		42", "42");
	test_atoi_one("25 48", "25");
	test_atoi_one("-2147483648", "-2147483648");
}

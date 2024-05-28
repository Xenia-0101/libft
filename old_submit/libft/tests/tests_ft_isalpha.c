
#include "tests.h"
#include "../ft_isalpha.c"

void test_ft_isalpha_1_a(void) {
	int passed;
	int c = 'a';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 1)
		passed = 0;
	tests__print("test_ft_isalpha_1_a", passed);
}
void test_ft_isalpha_2_A(void) {
	int passed;
	int c = 'A';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 1)
		passed = 0;
	tests__print("test_ft_isalpha_2_A", passed);
}
void test_ft_isalpha_3_z(void) {
	int passed;
	int c = 'z';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 1)
		passed = 0;
	tests__print("test_ft_isalpha_3_z", passed);
}
void test_ft_isalpha_4_Z(void) {
	int passed;
	int c = 'Z';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 1)
		passed = 0;
	tests__print("test_ft_isalpha_4_Z", passed);
}
void test_ft_isalpha_5_at(void) {
	int passed;
	int c = '@';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 0)
		passed = 0;
	tests__print("test_ft_isalpha_5_at", passed);
}
void test_ft_isalpha_6_left_br(void) {
	int passed;
	int c = '[';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 0)
		passed = 0;
	tests__print("test_ft_isalpha_6_left_br", passed);
}
void test_ft_isalpha_7_0(void) {
	int passed;
	int c = '0';
	int res = ft_isalpha(c);

	passed = 1;
	if (res != 0)
		passed = 0;
	tests__print("test_ft_isalpha_3_0", passed);
}

void test_isalpha_one(char input)
{
	printf("input:\t>>%c<<\n\texp:\t>>%d<<\n\tres:\t>>%d<<\n", input, isalpha(input), ft_isalpha(input));
}

void tests_ft_isalpha(void) {
	test_isalpha_one(' ');
	test_isalpha_one('\\');
	test_isalpha_one('/');
	test_isalpha_one('9');
	test_isalpha_one('A');
	test_isalpha_one('z');
	test_isalpha_one('9');
	test_isalpha_one('a');
	test_isalpha_one('A');
	test_isalpha_one('z');
	test_isalpha_one('Z');
	test_isalpha_one('@');
	test_isalpha_one(']');
	test_isalpha_one('0');
}

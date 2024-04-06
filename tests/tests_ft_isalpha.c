
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

void tests_ft_isalpha(void) {
	test_ft_isalpha_1_a();
	test_ft_isalpha_2_A();
	test_ft_isalpha_3_z();
	test_ft_isalpha_4_Z();
	test_ft_isalpha_5_at();
	test_ft_isalpha_6_left_br();
	test_ft_isalpha_7_0();
}

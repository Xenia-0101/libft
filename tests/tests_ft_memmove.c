
#include "tests.h"
#include "../ft_memmove.c"

void test_ft_memmove_1(void)
{
	int passed;
	char dest[100] = "Geeksfor";
	char t_dest[100] = "Geeksfor";

	ft_memmove(dest + 5, dest, 5);
	memmove(t_dest + 5, t_dest, 5);
	passed = 1;
	if (strcmp(dest, t_dest) != 0)
		passed = 0;
	tests__print("test_ft_memmove", passed);
}

void tests_ft_memmove(void)
{
	test_ft_memmove_1();
}

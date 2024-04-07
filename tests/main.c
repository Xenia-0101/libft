
#include "tests.h"

#include "../ft_isspace.c"

int main(int argc, char *argv[])
{
	void (*test_func)();

	if (argc == 2)
	{
		test_func = get_function_pointer(argv[1]);
		if (test_func != NULL)
			test_func();
		else
			printf("Function %s was not found.", argv[1]);
	}
	tests_ft_atoi();
	// tests_ft_bzero();
	// tests_ft_isalpha();
	// tests_ft_isdigit();
	// tests_ft_strlen();
	// tests_ft_memset();
	// tests_ft_memcpy();
	// tests_ft_memccpy();
	return (1);
}

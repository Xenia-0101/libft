
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
	else if (argc == 1)
	{
		tests__all();
	}
	return (1);
}

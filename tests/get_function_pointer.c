
#include "tests.h"

// Define a struct to hold function name and its corresponding function pointer
typedef struct
{
	char *name;
	void (*func)();
} FunctionMapping;

// Define a lookup table mapping function names to their function pointers
FunctionMapping functions[] = {
	{"ft_memccpy", tests_ft_memccpy},
	{"ft_atoi", tests_ft_atoi},
	{"ft_bzero", tests_ft_bzero}
};

// Find a function pointer based on its name
void (*get_function_pointer(char *name))() {
	long unsigned int i;

	for (i = 0; i < sizeof(functions) / sizeof(functions[0]); i++) {
		if (strcmp(name, functions[i].name) == 0) {
			return (functions[i].func);
		}
	}
	return (NULL); // Function not found
}

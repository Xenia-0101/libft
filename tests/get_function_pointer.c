
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
	{"ft_bzero", tests_ft_bzero},
	{"ft_isalpha", tests_ft_isalpha},
	{"ft_isdigit", tests_ft_isdigit},
	{"ft_strlen", tests_ft_strlen},
	{"ft_memset", tests_ft_memset},
	{"ft_memcpy", tests_ft_memcpy},
	{"ft_memccpy", tests_ft_memccpy},
	{"ft_strncmp", tests_ft_strncmp},
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
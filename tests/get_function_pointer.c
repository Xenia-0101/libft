
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
	{"ft_memmove", tests_ft_memmove},
	{"ft_isalnum", tests_ft_isalnum},
	{"ft_isascii", tests_ft_isascii},
	{"ft_isprint", tests_ft_isprint},
	{"ft_toupper", tests_ft_toupper},
	{"ft_tolower", tests_ft_tolower},
	{"ft_strcpy", tests_ft_strcpy},
	{"ft_strncpy", tests_ft_strncpy},
	{"ft_strlcpy", tests_ft_strlcpy},
	{"ft_strlcat", tests_ft_strlcat},
	{"ft_strchr", tests_ft_strchr},
	{"ft_strrchr", tests_ft_strrchr},
	{"ft_memchr", tests_ft_memchr},
	{"ft_memcmp", tests_ft_memcmp},

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

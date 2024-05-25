
#include "tests.h"

// Define a struct to hold function name and its corresponding function pointer
typedef struct
{
	char *name;
	void (*func)();
} FunctionMapping;

// Define a lookup table mapping function names to their function pointers
FunctionMapping functions[] = {
	{"ft_atoi", tests_ft_atoi},
	{"ft_bzero", tests_ft_bzero},
	{"ft_isalnum", tests_ft_isalnum},
	{"ft_isalpha", tests_ft_isalpha},
	{"ft_isascii", tests_ft_isascii},
	{"ft_isdigit", tests_ft_isdigit},
	{"ft_isprint", tests_ft_isprint},
	{"ft_memccpy", tests_ft_memccpy},
	{"ft_memchr", tests_ft_memchr},
	{"ft_memcmp", tests_ft_memcmp},
	{"ft_memcpy", tests_ft_memcpy},
	{"ft_memmove", tests_ft_memmove},
	{"ft_memset", tests_ft_memset},
	{"ft_strrchr", tests_ft_strrchr},
	{"ft_strcmp", tests_ft_strcmp},
	{"ft_strcpy", tests_ft_strcpy},
	{"ft_substr", tests_ft_substr},
	{"ft_strjoin", tests_ft_strjoin},
	{"ft_strlcat", tests_ft_strlcat},
	{"ft_strlcpy", tests_ft_strlcpy},
	{"ft_strlen", tests_ft_strlen},
	{"ft_strncmp", tests_ft_strncmp},
	{"ft_strncpy", tests_ft_strncpy},
	{"ft_strnstr", tests_ft_strnstr},
	{"ft_strchr", tests_ft_strchr},
	{"ft_tolower", tests_ft_tolower},
	{"ft_toupper", tests_ft_toupper},
	{"ft_strtrim", tests_ft_strtrim},
	{"ft_split", tests_ft_split},
	{"ft_itoa", tests_ft_itoa},
	{"ft_strmapi", tests_ft_strmapi},
	{"ft_striteri", tests_ft_striteri},
	{"ft_putchar_fd", tests_ft_putchar_fd},
	{"ft_putstr_fd", tests_ft_putstr_fd},
	{"ft_putnbr_fd", tests_ft_putnbr_fd},
	{"bonus", tests_ft_bonus},
	{"ft_calloc", tests_ft_calloc},
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

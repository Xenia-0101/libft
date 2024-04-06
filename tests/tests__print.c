
#include "tests.h"

void tests__print(const char *test, int passed) {
	if (passed)
		printf("OK:	");
	else
		printf("FAILED:	");
	printf("%s\n", test);
}

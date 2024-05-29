
#include "tests.h"

void tests__print(const char *test, int passed) {
	if (passed)
		write(1,"\x1b[1;32mOK:\t", 12);
	else
		write(1,"\x1b[1;31mFAILED:\t", 16);
	printf("%s\n", test);
	write(1, "\e[0m", 5);
}

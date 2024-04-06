#ifndef TESTS_H
# define TESTS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

void tests__print(const char *test, int passed);
void tests_ft_atoi(void);
void tests_ft_bzero(void);
void tests_ft_isalpha(void);
void tests_ft_isdigit(void);

#endif

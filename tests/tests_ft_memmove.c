
#include "tests.h"
#include "../ft_memmove.c"

/* static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
} */

void test_ft_memmove_1(void)
{
	int passed;
	char dest[100] = "Geeksfor";
	char t_dest[100] = "Geeksfor";

	ft_memmove(dest + 5, dest, 5);
	memmove(t_dest + 5, t_dest, 5);
	printf("\nExpected: %s\nGOT: %s\n", t_dest, dest);
	passed = 1;
	if (strcmp(dest, t_dest) != 0)
		passed = 0;
	tests__print("test_ft_memmove", passed);
}
void test_ft_memmove_2(void)
{
	int passed;
	char dest[100] = "Geeksfor";
	char t_dest[100] = "Geeksfor";

	ft_memmove(dest, dest + 5, 5);
	memmove(t_dest, t_dest + 5, 5);
	printf("\nExpected: %s\nGOT: %s\n", t_dest, dest);
	passed = 1;
	if (strcmp(dest, t_dest) != 0)
		passed = 0;
	tests__print("test_ft_memmove", passed);
}

void tests_ft_memmove(void)
{
	test_ft_memmove_1();
	test_ft_memmove_2();

	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	dest = src + 1;
	ft_memmove(dest, "consectetur", 5);
	printf("%s\n", dest);
	ft_memmove(dest, "con\0sec\0\0te\0tur", 10);
	printf("%s\n", dest);
	ft_memmove(dest, src, 8);
	printf("%s\n", dest);
	ft_memmove(src, dest, 8);
	printf("%s\n", dest);


}

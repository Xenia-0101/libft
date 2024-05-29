
#include "tests.h"
#include "../ft_memmove.c"

void test_ft_memmove_1(void)
{
	int passed;
	char dest[100] = "Geeksfor";
	char t_dest[100] = "Geeksfor";

	ft_memmove(dest + 5, dest, 5);
	memmove(t_dest + 5, t_dest, 5);
	passed = 1;
	if (strcmp(dest, t_dest) != 0)
		passed = 0;
	tests__print("test_ft_memmove", passed);
	printf("Expected: %s\nGOT: %s\n", t_dest, dest);
}
void test_ft_memmove_2(void)
{
	int passed;
	char dest[100] = "Geeksfor";
	char t_dest[100] = "Geeksfor";

	ft_memmove(dest, dest + 5, 5);
	memmove(t_dest, t_dest + 5, 5);
	passed = 1;
	if (strcmp(dest, t_dest) != 0)
		passed = 0;
	tests__print("test_ft_memmove", passed);
	printf("Expected: %s\nGOT: %s\n", t_dest, dest);
}

void tests_ft_memmove(void)
{
	test_ft_memmove_1();
	test_ft_memmove_2();

	char	src[] = "lorem ipsum dolor sit amet";
	char	t_src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	char	*t_dest;
	dest = src + 1;
	t_dest = t_src + 1;
	printf("***\n\n");
	printf("src:\t%s\nt_src:\t%s\ndest:\t%s\nt_dest:\t%s\n", src, t_src, dest, t_dest);

	ft_memmove(dest, "xxxxxxxxxxx", 5);
	memmove(t_dest, "xxxxxxxxxxx", 5);

	printf("***\n\n");
	printf("ft_memmove(dest, xxxxxxxxxxx, 5)\n");
	printf("***\n\n");
	printf("src:\t%s\nt_src:\t%s\ndest:\t%s\nt_dest:\t%s\n", src, t_src, dest, t_dest);

	ft_memmove(dest, "qqq\0qq\0\0qq\0qq", 10);
	memmove(t_dest, "qqq\0qq\0\0qq\0qq", 10);

	printf("***\n\n");
	printf("ft_memmove(dest, qqq-null-qq-null, 10)\n");
	printf("***\n\n");
	printf("src:\t%s\nt_src:\t%s\ndest:\t%s\nt_dest:\t%s\n", src, t_src, dest, t_dest);

	ft_memmove(dest, src, 8);
	memmove(t_dest, t_src, 8);

	printf("***\n\n");
	printf("ft_memmove(dest, src, 8)\n");
	printf("***\n\n");
	printf("src:\t%s\nt_src:\t%s\ndest:\t%s\nt_dest:\t%s\n", src, t_src, dest, t_dest);

	ft_memmove(src, dest, 8);
	ft_memmove(t_src, t_dest, 8);

	printf("***\n\n");
	printf("ft_memmove(src, dest, 8)\n");
	printf("***\n\n");
	printf("src:\t%s\nt_src:\t%s\ndest:\t%s\nt_dest:\t%s\n", src, t_src, dest, t_dest);

}

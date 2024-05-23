/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_substr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:41 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/18 17:46:41 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_substr.c"

void test_ft_substr_1(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 0;
	size_t len = 4;
	char *sub = ft_substr(s, start, len);

	if (!sub || strcmp(sub, "Hell"))
		pass = 0;
	tests__print("test_ft_substr_1", pass);
}

void test_ft_substr_2(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 2;
	size_t len = 3;
	char *sub = ft_substr(s, start, len);

	if (!sub || strcmp(sub, "llo"))
		pass = 0;
	tests__print("test_ft_substr_2", pass);
}

void test_ft_substr_3(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 2;
	size_t len = 5;
	char *sub = ft_substr(s, start, len);

	if (!sub || strcmp(sub, "llo"))
		pass = 0;
	tests__print("test_ft_substr_3", pass);
}

void test_ft_substr_4(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 4;
	size_t len = 5;
	char *sub = ft_substr(s, start, len);

	if (!sub || strcmp(sub, "o"))
		pass = 0;
	tests__print("test_ft_substr_4", pass);
}

void test_ft_substr_5(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 4;
	size_t len = 0;
	char *sub = ft_substr(s, start, len);
	if (!sub || strcmp(sub, ""))
		pass = 0;
	tests__print("test_ft_substr_5", pass);
}

void test_ft_substr_6(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 5;
	size_t len = 2;
	char *sub = ft_substr(s, start, len);
	if (!sub || strcmp(sub, ""))
		pass = 0;
	tests__print("test_ft_substr_6", pass);
}

void test_ft_substr_7(void)
{
	int pass = 1;
	char *sub = ft_substr("tripouille", 0, 42000);

	if (!sub || strcmp(sub, "tripouille"))
		pass = 0;
	tests__print("test_ft_substr_7", pass);
}

void test_ft_substr_8(void)
{
	int pass = 1;
	char *sub = ft_substr("tripouille", 100, 1);

	if (!sub || strcmp(sub, ""))
		pass = 0;
	tests__print("test_ft_substr_8", pass);
}

void test_single_substr(int test_number, char *str, unsigned int start, size_t size, char *expected)
{
	char *res = ft_substr(str, start, size);
	printf("%d\tres: \t%s\texp: \t%s\n", test_number, res, expected);
}

int test_substr()
{
	int res = 1;
	test_single_substr(1, "", 0, 0, "");
	test_single_substr(2, "", 0, 1, "");
	test_single_substr(3, "", 1, 1, "");
	test_single_substr(4, "hola", -1, 0, "");
	test_single_substr(5, "hola", 0, -1, "hola");
	test_single_substr(6, "hola", -1, -1, "");
	test_single_substr(7, "hola", 0, 0, "");
	test_single_substr(8, "hola", 0, 1, "h");
	test_single_substr(9, "hola", 0, 3, "hol");
	test_single_substr(10, "hola", 0, 4, "hola");
	test_single_substr(11, "hola", 0, 5, "hola");
	test_single_substr(12, "hola", 2, 0, "");
	test_single_substr(13, "hola", 2, 1, "l");
	test_single_substr(14, "hola", 2, 2, "la");
	test_single_substr(15, "hola", 2, 3, "la");
	test_single_substr(16, "hola", 2, 30, "la");
	test_single_substr(17, "hola", 3, 0, "");
	test_single_substr(18, "hola", 3, 1, "a");
	test_single_substr(19, "hola", 3, 2, "a");
	test_single_substr(20, "hola", 4, 0, "");
	test_single_substr(21, "hola", 4, 1, "");
	test_single_substr(22, "hola", 4, 20, "");
	test_single_substr(23, "hola", 5, 2, "");

	return res;
}

#define ODD(x) (1 & (x))

void tests_ft_substr(void)
{
	test_ft_substr_1();
	test_ft_substr_2();
	test_ft_substr_3();
	test_ft_substr_4();
	test_ft_substr_5();
	test_ft_substr_6();
	test_ft_substr_7();
	test_ft_substr_8();

	char *str = strdup("0123456789");
	char *s = ft_substr(str, 9, 10);
	printf("str:\t%s\nsubstr: \t%s\n", str, s);
	test_substr();
}

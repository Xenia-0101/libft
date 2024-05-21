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
}

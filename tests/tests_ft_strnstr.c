/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strnstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:46:09 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 22:46:09 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strnstr.c"

void test_ft_strnstr_1(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "with";
	const char *exp = "with its environment, while for irreversible processes it is not.";
	const char *res = ft_strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_1", pass);
}

void test_ft_strnstr_2(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "For";
	const char *exp = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *res = ft_strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_2", pass);
}

void test_ft_strnstr_3(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = ".";
	const char *exp = ".";
	const char *res = ft_strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_3", pass);
}

void test_ft_strnstr_4(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "";
	const char *exp = big;
	const char *res = ft_strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_4", pass);
}

void test_ft_strnstr_5(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "energy";
	const char *res = ft_strnstr(big, little, 120);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_5", pass);
}

void test_ft_strnstr_6(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Lorem";
	const char *exp = big;
	const char *res = ft_strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_6", pass);
}

void test_ft_strnstr_7(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Sea Otters";
	const char *res = ft_strnstr(big, little, 120);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_7", pass);
}

void test_ft_strnstr_8(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Lorem ipsum dolor sit amet and more";
	const char *res = ft_strnstr(big, little, 120);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_8", pass);
}

void test_ft_strnstr_9(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Lorem ipsum dolor sit amet";
	const char *res = ft_strnstr(big, little, 120);

	if (!res || strcmp(big, res))
		pass = 0;
	tests__print("test_ft_strnstr_9", pass);
}

void test_ft_strnstr_10(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "dolor";
	const char *res = ft_strnstr(big, little, 16);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_10", pass);
}

void test_ft_strnstr_12(void)
{
	int pass = 1;
	char * empty = (char*)"";
	const char *res = ft_strnstr(empty, "", -1);

	if (!res || strcmp(empty, res))
		pass = 0;
	tests__print("test_ft_strnstr_12", pass);
}

void test_ft_strnstr_13(void)
{
	int pass = 1;
	char haystack[30] = "aaabcabcd";
	const char *res = ft_strnstr(haystack, "abcd", 9);

	if (!res || strcmp(res, haystack + 5))
		pass = 0;
	tests__print("test_ft_strnstr_13", pass);
}

void test_ft_strnstr_11(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "dolor";
	const char *exp = "dolor sit amet";
	const char *res = ft_strnstr(big, little, 18);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_11", pass);
}

void tests_ft_strnstr(void)
{
	test_ft_strnstr_1();
	test_ft_strnstr_2();
	test_ft_strnstr_3();
	test_ft_strnstr_4();
	test_ft_strnstr_5();
	test_ft_strnstr_6();
	test_ft_strnstr_7();
	test_ft_strnstr_8();
	test_ft_strnstr_9();
	test_ft_strnstr_10();
	test_ft_strnstr_11();
	test_ft_strnstr_12();
	test_ft_strnstr_13();
}


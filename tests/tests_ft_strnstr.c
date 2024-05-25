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

#include <string.h>

/*
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */
char *
strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

void test_ft_strnstr_1(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "with";
	const char *exp = "with its environment, while for irreversible processes it is not.";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_1", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_2(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "For";
	const char *exp = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_2", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_3(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = ".";
	const char *exp = ".";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_3", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_4(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "";
	const char *exp = big;
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_4", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_5(void)
{
	int pass = 1;
	const char *big = "For reversible processes the system is in equilibrium with its environment, while for irreversible processes it is not.";
	const char *little = "energy";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_5", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_6(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Lorem";
	const char *exp = big;
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_6", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_7(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Sea Otters";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_7", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_8(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Lorem ipsum dolor sit amet and more";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (res)
		pass = 0;
	tests__print("test_ft_strnstr_8", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_9(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "Lorem ipsum dolor sit amet";
	const char *res = ft_strnstr(big, little, 120);
	const char *t_res = strnstr(big, little, 120);

	if (!res || strcmp(big, res))
		pass = 0;
	tests__print("test_ft_strnstr_9", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_10(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "dolor";
	const char *res = ft_strnstr(big, little, 16);
	const char *t_res = strnstr(big, little, 16);

	if (res != NULL)
		pass = 0;
	tests__print("test_ft_strnstr_10", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);
}

void test_ft_strnstr_12(void)
{
	int pass = 1;
	char * empty = (char*)"";
	const char *res = ft_strnstr(empty, "", -1);

	if (!res || strcmp(strnstr(empty, "", -1), res))
		pass = 0;
	tests__print("test_ft_strnstr_12", pass);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",strnstr(empty, "", -1), res);
}

void test_ft_strnstr_13(void)
{
	int pass = 1;
	char haystack[30] = "aaabcabcd";
	const char *res = ft_strnstr(haystack, "abcd", 9);

	if (!res || strcmp(res, strnstr(haystack, "abcd", 9)))
		pass = 0;
	tests__print("test_ft_strnstr_13", pass);
}

void test_ft_strnstr_11(void)
{
	int pass = 1;
	const char *big = "Lorem ipsum dolor sit amet";
	const char *little = "dolor";
	const char *exp = strnstr(big, little, 18);
	const char *res = ft_strnstr(big, little, 18);

	if (!res || strcmp(exp, res))
		pass = 0;
	tests__print("test_ft_strnstr_11", pass);
}

void test_ft_strnstr_14_NULL_str(void)
{
	const char *big = NULL;
	const char *little = NULL;
	const char *res = ft_strnstr(big, little, 0);

	printf("Exp:\t>>(null)<<\nRes:\t>>%s<<\n", res);
}

void test_ft_strnstr_15_empty_str(void)
{
	const char *big = "abc";
	const char *little = "";
	const char *res = ft_strnstr(big, little, 0);

	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",strnstr(big, little, 0), res);
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
	test_ft_strnstr_14_NULL_str();
	test_ft_strnstr_15_empty_str();
	char * empty = (char*)"";
	const char *res = ft_strnstr(empty, "", -1);
	const char *t_res = strnstr(empty, "", -1);
	printf("Exp:\t>>%s<<\nRes:\t>>%s<<\n",t_res, res);

}


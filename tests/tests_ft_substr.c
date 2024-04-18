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
#include "../ft_substr_bonus.c"
#include "../ft_calloc.c"

void test_ft_strdup_1(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 0;
	size_t len = 4;
	char *sub = ft_substr(s, start, len);

	if (!sub || ft_strcmp(sub, "Hell"))
		pass = 0;
	tests__print("test_ft_strdup_1", pass);
}

void test_ft_strdup_2(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 2;
	size_t len = 3;
	char *sub = ft_substr(s, start, len);

	if (!sub || ft_strcmp(sub, "llo"))
		pass = 0;
	tests__print("test_ft_strdup_2", pass);
}

void test_ft_strdup_3(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 2;
	size_t len = 5;
	char *sub = ft_substr(s, start, len);

	if (!sub || ft_strcmp(sub, "llo"))
		pass = 0;
	tests__print("test_ft_strdup_3", pass);
}

void test_ft_strdup_4(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 4;
	size_t len = 5;
	char *sub = ft_substr(s, start, len);

	if (!sub || ft_strcmp(sub, "o"))
		pass = 0;
	tests__print("test_ft_strdup_4", pass);
}

void test_ft_strdup_5(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 4;
	size_t len = 0;
	char *sub = ft_substr(s, start, len);

	if (sub)
		pass = 0;
	tests__print("test_ft_strdup_5", pass);
}

void test_ft_strdup_6(void)
{
	int pass = 1;
	const char *s = "Hello";
	int start = 5;
	size_t len = 2;
	char *sub = ft_substr(s, start, len);

	if (sub)
		pass = 0;
	tests__print("test_ft_strdup_6", pass);
}

void tests_ft_strdup(void)
{
	test_ft_strdup_1();
	test_ft_strdup_2();
	test_ft_strdup_3(); 
	test_ft_strdup_4();
	test_ft_strdup_5();
	test_ft_strdup_6();
}

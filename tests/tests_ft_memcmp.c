/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_memcmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:48:05 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 19:48:05 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_memcmp.c"

void test_ft_memcmp_1_equal(void)
{
	int res;
	int passed;

	res = ft_memcmp("hello", "hello", 5);
	passed = 1;
	if (res != memcmp("hello", "hello", 5))
		passed = 0;
	tests__print("test_ft_memcmp_1_equal", passed);
}

void test_ft_memcmp_2_larger(void)
{
	int res;
	int passed;

	res = ft_memcmp("hello", "hell", 5);
	passed = 1;
	if (res != memcmp("hello", "hell", 5))
		passed = 0;
	tests__print("test_ft_memcmp_2_larger", passed);
}

void test_ft_memcmp_3_lower(void)
{
	int res;
	int passed;

	res = ft_memcmp("hell", "hello", 5);
	passed = 1;
	if (res != memcmp("hell", "hello", 5))
		passed = 0;
	tests__print("test_ft_memcmp_3_lower", passed);
}

void test_ft_memcmp_4_empty_1(void)
{
	int res;
	int passed;

	res = ft_memcmp("", "hello", 5);
	passed = 1;
	if (res != memcmp("", "hello", 5))
		passed = 0;
	tests__print("test_ft_memcmp_4_empty_1", passed);
}

void test_ft_memcmp_5_empty_2(void)
{
	int res;
	int passed;

	res = ft_memcmp("hello", "", 5);
	passed = 1;
	if (res != memcmp("hello", "", 5))
		passed = 0;
	tests__print("test_ft_memcmp_5_empty_2", passed);
}

void	tests_ft_memcmp(void)
{

	test_ft_memcmp_1_equal();
	test_ft_memcmp_2_larger();
	test_ft_memcmp_3_lower();
	test_ft_memcmp_4_empty_1();
	test_ft_memcmp_5_empty_2();
	printf("%d\n", memcmp("hello","hell",  5));
	printf("%d\n", memcmp("hell","helo",  5));
	printf("%d\n", memcmp("hel","hello",  5));
	printf("%d\n", memcmp("he","hello",  5));
	printf("%d\n", memcmp("h","hello",  5));
	printf("%d\n", memcmp("","hello",  5));
}

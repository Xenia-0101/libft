/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strncmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:33:51 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 20:33:51 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strncmp.c"

void test_ft_strncmp_1_equal(void)
{
	int res;
	int passed;

	res = ft_strncmp("hello", "hello", 5);
	passed = 1;
	if (res != strncmp("hello", "hello", 5))
		passed = 0;
	tests__print("test_ft_strncmp_1_equal", passed);
	printf("res:\t%d\n exp:\t%d\n", res, strncmp("hello", "hello", 5));
}

void test_ft_strncmp_2_larger(void)
{
	int res;
	int passed;

	res = ft_strncmp("hello", "hell", 5);
	passed = 1;
	if (res != strncmp("hello", "hell", 5))
		passed = 0;
	tests__print("test_ft_strncmp_2_larger", passed);
	printf("res:\t%d\n exp:\t%d\n", res, strncmp("hello", "hell", 5));
}

void test_ft_strncmp_3_lower(void)
{
	int res;
	int passed;

	res = ft_strncmp("hell", "hello", 5);
	passed = 1;
	if (res != strncmp("hell", "hello", 5))
		passed = 0;
	tests__print("test_ft_strncmp_3_lower", passed);
	printf("res:\t%d\n exp:\t%d\n", res, strncmp("hell", "hello", 5));
}

void test_ft_strncmp_4_empty_1(void)
{
	int res;
	int passed;

	res = ft_strncmp("", "hello", 5);
	passed = 1;
	if (res != strncmp("", "hello", 5))
		passed = 0;
	tests__print("test_ft_strncmp_4_empty_1", passed);
	printf("res:\t%d\n exp:\t%d\n", res, strncmp("", "hello", 5));
}

void test_ft_strncmp_5_empty_2(void)
{
	int res;
	int passed;

	res = ft_strncmp("hello", "", 5);
	passed = 1;
	if (res != strncmp("hello", "", 5))
		passed = 0;
	tests__print("test_ft_strncmp_5_empty_2", passed);
	printf("res:\t%d\n exp:\t%d\n", res, strncmp("hello", "", 5));
}

void test_ft_strncmp_6(void)
{
	int res;
	int passed;

	res = ft_strncmp("test\200", "test\0", 6);
	passed = 1;
	if (res != strncmp("test\200", "test\0", 6))
		passed = 0;
	tests__print("test_ft_strncmp_6", passed);
	printf("res:\t%d\n exp:\t%d\n", res, strncmp("test\200", "test\0", 6));
}

void tests_ft_strncmp(void)
{
	test_ft_strncmp_1_equal();
	test_ft_strncmp_2_larger();
	test_ft_strncmp_3_lower();
	test_ft_strncmp_4_empty_1();
	test_ft_strncmp_5_empty_2();
	test_ft_strncmp_6();



}

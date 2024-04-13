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
	int passed = 1;
	const void *s1 = "hello";
	const void *s2 = "hell0";
	int res = ft_memcmp(s1, s2, 5);
	int t_res = memcmp(s1, s2, 5);

	if (res != t_res)
		passed = 0;
	tests__print("test_ft_memcmp_1_equal", passed);
}

void test_ft_memcmp_2_larger(void)
{
	int passed = 1;
	const void *s1 = "hello";
	const void *s2 = "hell";

	int res = ft_memcmp(s1, s2, 5);
	int t_res = memcmp(s1, s2, 5);
	passed = 1;
	if (res != t_res)
		passed = 0;
	tests__print("test_ft_memcmp_2_larger", passed);
}

void test_ft_memcmp_3_lower(void)
{
	int passed = 1;
	const void *s1 = "hell";
	const void *s2 = "hell0";

	int res = ft_memcmp(s1, s2, 5);
	int t_res = memcmp(s1, s2, 5);
	passed = 1;
	if (res != t_res)
		passed = 0;
	tests__print("test_ft_memcmp_3_lower", passed);
}

void test_ft_memcmp_4_empty_1(void)
{
	int passed = 1;
	const void *s1 = "";
	const void *s2 = "hell0";

	int res = ft_memcmp(s1, s2, 5);
	int t_res = memcmp(s1, s2, 5);
	passed = 1;
	if (res != t_res)
		passed = 0;
	tests__print("test_ft_memcmp_4_empty_1", passed);
}

void test_ft_memcmp_5_empty_2(void)
{
	int passed = 1;
	const void *s1 = "hello";
	const void *s2 = "";

	int res = ft_memcmp(s1, s2, 5);
	int t_res = memcmp(s1, s2, 5);
	passed = 1;
	if (res != t_res)
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
}

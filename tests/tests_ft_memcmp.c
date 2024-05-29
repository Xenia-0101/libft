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
	printf("s1:\t%s\ns2:\t%s\n\texp:\t%d\n\tres:\t%d\n", (char *)s1, (char *)s2, res, t_res);
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
	printf("s1:\t%s\ns2:\t%s\n\texp:\t%d\n\tres:\t%d\n", (char *)s1, (char *)s2, res, t_res);
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
	printf("s1:\t%s\ns2:\t%s\n\texp:\t%d\n\tres:\t%d\n", (char *)s1, (char *)s2, res, t_res);
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
	printf("s1:\t%s\ns2:\t%s\n\texp:\t%d\n\tres:\t%d\n", (char *)s1, (char *)s2, res, t_res);
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
	printf("s1:\t%s\ns2:\t%s\n\texp:\t%d\n\tres:\t%d\n", (char *)s1, (char *)s2, res, t_res);
}

void test_ft_memcmp_6_zeros(void)
{
	int passed = 1;
	char s1[] = {0, 0, 127, 0};
	char s2[] = {0, 0, 42, 0};

	int res = ft_memcmp(s1, s2, 5);
	int t_res = memcmp(s1, s2, 5);
	passed = 1;
	if (res != t_res)
		passed = 0;
	tests__print("test_ft_memcmp_6_zeros", passed);
	printf("s1:\t%s\ns2:\t%s\n\texp:\t%d\n\tres:\t%d\n", (char *)s1, (char *)s2, res, t_res);
}

void	tests_ft_memcmp(void)
{
	test_ft_memcmp_1_equal();
	test_ft_memcmp_2_larger();
	test_ft_memcmp_3_lower();
	test_ft_memcmp_4_empty_1();
	test_ft_memcmp_5_empty_2();
	test_ft_memcmp_6_zeros();
}

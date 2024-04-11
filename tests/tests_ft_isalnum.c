/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isalnum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:36:02 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 09:36:02 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_isalnum.c"

void test_ft_isalnum_1_a(void)
{
	int passed;

	passed = 1;
	if (!ft_isalnum('a'))
		passed = 0;
	tests__print("test_ft_isalnum_1_a", passed);
}

void test_ft_isalnum_2_A(void)
{
	int passed;

	passed = 1;
	if (!ft_isalnum('A'))
		passed = 0;
	tests__print("test_ft_isalnum_1_A", passed);
}

void test_ft_isalnum_3_9(void)
{
	int passed;

	passed = 1;
	if (ft_isalnum(9))
		passed = 0;
	tests__print("test_ft_isalnum_1_9", passed);
}

void test_ft_isalnum_4_slash(void)
{
	int passed;

	passed = 1;
	if (ft_isalnum('/'))
		passed = 0;
	tests__print("test_ft_isalnum_1_slash", passed);
}

void test_ft_isalnum_5_space(void)
{
	int passed;

	passed = 1;
	if (ft_isalnum(' '))
		passed = 0;
	tests__print("test_ft_isalnum_1_space", passed);
}

void tests_ft_isalnum(void)
{
	test_ft_isalnum_1_a();
	test_ft_isalnum_2_A();
	test_ft_isalnum_3_9();
	test_ft_isalnum_4_slash();
	test_ft_isalnum_5_space();
}

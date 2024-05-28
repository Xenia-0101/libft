/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isascii.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:48:49 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 10:48:49 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_isascii.c"

void test_ft_isascii_1_a(void)
{
	int pass;

	pass = 1;
	if (!(ft_isascii('a') == isascii('a')))
		pass = 0;
	tests__print("test_ft_isascii_1_a", pass);
}

void test_ft_isascii_2_long_e(void)
{
	int pass;

	pass = 1;
	if (!(ft_isascii(0xe9) == isascii(0xe9)))
		pass = 0;
	tests__print("test_ft_isascii_2_long_e", pass);
}

void test_ft_isascii_3_z(void)
{
	int pass;

	pass = 1;
	if (!(ft_isascii('z') == isascii('z')))
		pass = 0;
	tests__print("test_ft_isascii_3_z", pass);
}

void test_ft_isascii_4_space(void)
{
	int pass;

	pass = 1;
	if (!(ft_isascii(' ') == isascii(' ')))
		pass = 0;
	tests__print("test_ft_isascii_4_space", pass);
}

void test_ft_isascii_5_alpha(void)
{
	int pass;

	pass = 1;
	if (!(ft_isascii(945) == isascii(945)))
		pass = 0;
	tests__print("test_ft_isascii_5_alpha", pass);
}

void test_ft_isascii_6_smile(void)
{
	int pass;

	pass = 1;
	if (!(ft_isascii(128522) == isascii(128522)))
		pass = 0;
	tests__print("test_ft_isascii_6_smile", pass);
}

void tests_ft_isascii(void)
{
	test_ft_isascii_1_a();
	test_ft_isascii_2_long_e();
	test_ft_isascii_3_z();
	test_ft_isascii_4_space();
	test_ft_isascii_5_alpha();
	test_ft_isascii_6_smile();
}

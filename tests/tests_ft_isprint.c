/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:48:01 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 11:48:01 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_isprint.c"

void test_ft_isprint_1_ascii_0(void)
{
	int pass = 1;
	if (ft_isprint(0))
		pass = 0;
	tests__print("test_ft_isprint_1_ascii_0", pass);
}

void test_ft_isprint_2_ascii_31(void)
{
	int pass = 1;
	if (ft_isprint(31))
		pass = 0;
	tests__print("test_ft_isprint_2_ascii_31", pass);
}

void test_ft_isprint_3_ascii_127(void)
{
	int pass = 1;
	if (ft_isprint(127))
		pass = 0;
	tests__print("test_ft_isprint_3_ascii_127", pass);
}

void test_ft_isprint_4_ascii_32(void)
{
	int pass = 1;
	if (!ft_isprint(32))
		pass = 0;
	tests__print("test_ft_isprint_4_ascii_32", pass);
}

void test_ft_isprint_5_ascii_126(void)
{
	int pass = 1;
	if (!ft_isprint(126))
		pass = 0;
	tests__print("test_ft_isprint_5_ascii_126", pass);
}

void tests_ft_isprint(void)
{
	test_ft_isprint_1_ascii_0();
	test_ft_isprint_2_ascii_31();
	test_ft_isprint_3_ascii_127();
	test_ft_isprint_4_ascii_32();
	test_ft_isprint_5_ascii_126();
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strlcat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:11:11 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 01:11:11 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strlcat.c"

void test_ft_strlcat_1_concat_two_strings_exact_mem(void)
{
	int pass = 1;
	char dest[11] = "hello";
	const char *src = "World";
	size_t res = ft_strlcat(dest, src, 11);
	if (res != 10 || strcmp(dest, "helloWorld"))
		pass = 0;
	tests__print("test_ft_strlcat_1_concat_two_strings_exact_mem", pass);
}

void test_ft_strlcat_2_concat_two_strings_larger_mem(void)
{
	int pass = 1;
	char dest[13] = "hello";
	const char *src = "World";
	size_t res = ft_strlcat(dest, src, 13);
	if (res != 10 || strcmp(dest, "helloWorld"))
		pass = 0;
	tests__print("test_ft_strlcat_2_concat_two_strings_larger_mem", pass);
}

void test_ft_strlcat_3_concat_two_strings_smaller_mem(void)
{
	int pass = 1;
	char dest[9] = "hello";
	const char *src = "World";
	size_t res = ft_strlcat(dest, src, 9);
	if (res != 10 || strcmp(dest, "helloWor"))
		pass = 0;
	tests__print("test_ft_strlcat_3_concat_two_strings_smaller_mem", pass);
}

void test_ft_strlcat_4_concat_to_empty_string(void)
{
	char dest[9] = "";
	int pass = 1;
	const char *src = "World";
	size_t res = ft_strlcat(dest, src, 9);
	if (res != 5 || strcmp(dest, "World"))
		pass = 0;
	tests__print("test_ft_strlcat_4_concat_to_empty_string", pass);
}

void test_ft_strlcat_5_concat_empty_string(void)
{
	int pass = 1;
	char dest[9] = "hello";
	const char *src = "";
	size_t res = ft_strlcat(dest, src, 9);
	if (res != 5 || strcmp(dest, "hello"))
		pass = 0;
	tests__print("test_ft_strlcat_5_concat_empty_string", pass);
}

void	tests_ft_strlcat(void)
{
	test_ft_strlcat_1_concat_two_strings_exact_mem();
	test_ft_strlcat_2_concat_two_strings_larger_mem();
	test_ft_strlcat_3_concat_two_strings_smaller_mem();
	test_ft_strlcat_4_concat_to_empty_string();
	test_ft_strlcat_5_concat_empty_string();


}

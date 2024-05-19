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
	printf("\nExpected: >helloWorld<>10<\nGot: >%s<>%ld<", dest, res);
	printf("\n");
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
	printf("\nExpected: >helloWorld<>10<\nGot: >%s<>%ld<", dest, res);
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
	printf("\nExpected: >helloWor<>10<\nGot: >%s<>%ld<", dest, res);
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
	printf("\nExpected: >World<>5<\nGot: >%s<>%ld<", dest, res);
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
	printf("\nExpected: >hello<>5<\nGot: >%s<>%ld<", dest, res);
	if (res != 5 || strcmp(dest, "hello"))
		pass = 0;
	tests__print("test_ft_strlcat_5_concat_empty_string", pass);
}

void test_ft_strlcat_6_size_is_zero(void)
{
	int pass = 1;
	char dest[30];
	memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	size_t res = ft_strlcat(dest, src, 0);
	if (res != 9 || strcmp(dest, "B"))
		pass = 0;
	printf("\nExpected: >B<>9<\nGot: >%s<>%ld<", dest, res);
	tests__print("test_ft_strlcat_6_size_is_zero", pass);
}

void test_ft_strlcat_7(void)
{
	int pass = 1;
	char dest[30];
	memset(dest,'B', 4);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	size_t res = ft_strlcat(dest, src, 3);
	printf("\nExpected: >BBBB<>12<\nGot: >%s<>%ld<", dest, res);
	if (res != 12 || strcmp(dest, "BBBB"))
		pass = 0;
	tests__print("test_ft_strlcat_7", pass);
}

void test_ft_strlcat_8(void)
{
	char dest[30];
	char * src = (char *)"AAAAAAAAA";
	memset(dest, 'C', 15);
	printf("res: %ld\n", ft_strlcat(dest, src, 17));
	printf("dest: %s\n", dest);

}

void	tests_ft_strlcat(void)
{
	test_ft_strlcat_1_concat_two_strings_exact_mem();
	test_ft_strlcat_2_concat_two_strings_larger_mem();
	test_ft_strlcat_3_concat_two_strings_smaller_mem();
	test_ft_strlcat_4_concat_to_empty_string();
	test_ft_strlcat_5_concat_empty_string();
	test_ft_strlcat_6_size_is_zero();
	test_ft_strlcat_7();
	test_ft_strlcat_8();

	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	size_t res = ft_strlcat(dest, src, 0);
	printf("len: %ld\ndest: %s\n", res, dest);

	memset(dest, 'C', 5);
	res = ft_strlcat(dest, src, -1);
	printf("len: %ld\ndest: %s\n", res, dest);

	memset(dest, 'B', 4);
	res = ft_strlcat(dest, src, 3);
	printf("len: %ld\ndest: %s\n", res, dest);
}

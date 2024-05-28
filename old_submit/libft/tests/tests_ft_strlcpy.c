/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 00:11:58 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 00:11:58 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strlcpy.c"

void test_ft_strlcpy_1(void)
{
	int pass;
	char dest[10];
	const char *src = "World!";

	size_t s_len =  ft_strlcpy(dest, src, 10);
	pass = 1;
	if (s_len != 6 || strcmp(dest, "World!"))
		pass = 0;
	tests__print("test_ft_strlcpy_1", pass);
	printf("src: %s\t\nres: <%s>, %ld\t\nexp: <World!>, 6\n", src, dest, s_len);
}

void test_ft_strlcpy_2(void)
{
	int pass;
	char dest[10];
	const char *src = "Hello, World!";

	size_t s_len =  ft_strlcpy(dest, src, 10);
	pass = 1;
	if (s_len != 13 || strcmp(dest, "Hello, Wo"))
		pass = 0;
	tests__print("test_ft_strlcpy_2", pass);
	printf("src: %s\t\nres: <%s>, %ld\t\nexp: <Hello, Wo>, 13\n", src, dest, s_len);
}

void test_ft_strlcpy_3(void)
{
	int pass;
	char dest[5];
	const char *src = "Hello, World!";

	size_t s_len =  ft_strlcpy(dest, src, 5);
	pass = 1;
	if (s_len != 13 || strcmp(dest, "Hell"))
		pass = 0;
	tests__print("test_ft_strlcpy_3", pass);
	printf("src: %s\t\nres: <%s>, %ld\t\nexp: <Hell>, 13\n", src, dest, s_len);
}

void test_ft_strlcpy_4(void)
{
	int pass;
	char dest[5];
	const char *src = "";

	size_t s_len =  ft_strlcpy(dest, src, 5);
	pass = 1;
	if (s_len != 0 || strcmp(dest, ""))
		pass = 0;
	tests__print("test_ft_strlcpy_4", pass);
	printf("src: %s\t\nres: <%s>, %ld\t\nexp: <>, 0\n", src, dest, s_len);
}

void test_ft_strlcpy_5(void)
{
	int pass;
	char dest[1];
	const char *src = "Hello, World!";

	size_t s_len =  ft_strlcpy(dest, src, 1);
	pass = 1;
	if (s_len != 13 || strcmp(dest, ""))
		pass = 0;
	tests__print("test_ft_strlcpy_5", pass);
	printf("src: %s\t\nres: <%s>, %ld\t\nexp: <>, 13\n", src, dest, s_len);
}

void test_ft_strlcpy_6(void)
{
	int pass = 1;
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	size_t s_len =  ft_strlcpy(dest, src, 0);

	if (s_len != 6 || strcmp(dest, "AAAAAAAAAA"))
		pass = 0;
	tests__print("test_ft_strlcpy_6", pass);
	printf("src: %s\t\nres: <%s>, %ld\t\nexp: <AAAAAAAAAA>, 6\n", src, dest, s_len);
}

void tests_ft_strlcpy(void)
{
	test_ft_strlcpy_1();
	test_ft_strlcpy_2();
	test_ft_strlcpy_3();
	test_ft_strlcpy_4();
	test_ft_strlcpy_5();
	test_ft_strlcpy_6();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_memchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:27:12 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 17:27:12 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_memchr.c"

void test_ft_memchr_1(void)
{
	int pass = 1;
	char *str = "hello there";
	char c = 't';
	char *t_str = ft_memchr(str, c, 11);
	if (strcmp(t_str, memchr(str, c, 11)))
		pass = 0;
	tests__print("test_ft_memchr_1", pass);
}

void test_ft_memchr_2(void)
{
	int pass = 1;
	char *str = "hello there";
	char c = 't';
	char *t_str = ft_memchr(str, c, 6);
	if (t_str)
		pass = 0;
	tests__print("test_ft_memchr_2", pass);
}

void test_ft_memchr_3(void)
{
	int pass = 1;
	char *str = "hello there!";
	char c = '!';
	char *t_str = ft_memchr(str, c, 12);
	if (strcmp(t_str, memchr(str, c, 12)))
		pass = 0;
	tests__print("test_ft_memchr_3", pass);
}

void test_ft_memchr_4(void)
{
	int pass = 1;
	char *str = "*hello there!";
	char c = '*';
	char *t_str = ft_memchr(str, c, 13);
	if (strcmp(t_str, memchr(str, c, 13)))
		pass = 0;
	tests__print("test_ft_memchr_4", pass);
}

void test_ft_memchr_5(void)
{
	int pass = 1;
	char *str = "*hello there!";
	char c = 'l';
	char *t_str = ft_memchr(str, c, 13);
	if (strcmp(t_str, memchr(str, c, 13)))
		pass = 0;
	tests__print("test_ft_memchr_5", pass);
}

void test_ft_memchr_6(void)
{
	int pass = 1;
	char *str = "*hello there!";
	char c = 'x';
	char *t_str = ft_memchr(str, c, 13);
	if (t_str)
		pass = 0;
	tests__print("test_ft_memchr_6", pass);
}

void tests_ft_memchr(void)
{
	test_ft_memchr_1();
	test_ft_memchr_2();
	test_ft_memchr_3();
	test_ft_memchr_4();
	test_ft_memchr_5();
	test_ft_memchr_6();
}

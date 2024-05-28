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

void test_ft_memchr_middle_of_str(void)
{
	int pass = 1;
	char *str = "hello there";
	char c = 't';
	char *t_str = ft_memchr(str, c, 11);
	if (strcmp(t_str, memchr(str, c, 11)))
		pass = 0;
	tests__print("test_ft_memchr_middle_of_str", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, c, 11));
}

void test_ft_memchr_size_constraint(void)
{
	int pass = 1;
	char *str = "hello there";
	char c = 't';
	char *t_str = ft_memchr(str, c, 6);
	if (t_str)
		pass = 0;
	tests__print("test_ft_memchr_size_constraint", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, c, 6));
}

void test_ft_memchr_last_char(void)
{
	int pass = 1;
	char *str = "hello there!";
	char c = '!';
	char *t_str = ft_memchr(str, c, 12);
	if (strcmp(t_str, memchr(str, c, 12)))
		pass = 0;
	tests__print("test_ft_memchr_last_char", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, c, 12));
}

void test_ft_memchr_first_char(void)
{
	int pass = 1;
	char *str = "*hello there!";
	char c = '*';
	char *t_str = ft_memchr(str, c, 13);
	if (strcmp(t_str, memchr(str, c, 13)))
		pass = 0;
	tests__print("test_ft_memchr_first_char", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, c, 13));
}

void test_ft_memchr_char_not_in_str(void)
{
	int pass = 1;
	char *str = "*hello there!";
	char c = 'l';
	char *t_str = ft_memchr(str, c, 13);
	if (strcmp(t_str, memchr(str, c, 13)))
		pass = 0;
	tests__print("test_ft_memchr_char_not_in_str", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, c, 13));
}

void test_ft_memchr_char_not_in_string(void)
{
	int pass = 1;
	char *str = "*hello there!";
	char c = 'x';
	char *t_str = ft_memchr(str, c, 13);
	if (t_str)
		pass = 0;
	tests__print("test_ft_memchr_char_not_in_string", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, c, 13));
}

void test_ft_memchr_fid_char_overflow(void)
{
	int pass = 1;
	char str[] = {0, 1, 2 ,3 ,4 ,5};
	char *t_str = ft_memchr(str, 2 + 256, 3);
	if (strcmp(t_str, memchr(str, 2 + 256, 3)))
		pass = 0;
	tests__print("test_ft_memchr_fid_char_overflow", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_str, (char *)memchr(str, 2 + 256, 7));
}

void test_ft_memchr_find_integer(void)
{
	int pass = 1;
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	char *t_tab = (char *)ft_memchr(tab, -1, 7);
	if (strcmp(t_tab, memchr(tab, -1, 7)))
		pass = 0;
	tests__print("test_ft_memchr_find_integer", pass);
	printf("res: >>%p<<\nexp: >>%p<<\n\n", t_tab, (char *)memchr(tab, -1, 7));
}

void tests_ft_memchr(void)
{
	test_ft_memchr_middle_of_str();
	test_ft_memchr_size_constraint();
	test_ft_memchr_last_char();
	test_ft_memchr_first_char();
	test_ft_memchr_char_not_in_str();
	test_ft_memchr_char_not_in_string();
	test_ft_memchr_find_integer();
	test_ft_memchr_fid_char_overflow();
}

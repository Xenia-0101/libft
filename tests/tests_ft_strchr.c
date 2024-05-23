/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:34:09 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 14:34:09 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strchr.c"

void	test_ft_strchr_1(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strchr(s, 't');

	if (strcmp(new_s, strchr(s, 't')))
		pass = 0;

	if (strcmp(new_s-2, strchr(s, 't')-2))
		pass = 0;
	tests__print("test_ft_strchr_1", pass);

}

void	test_ft_strchr_2(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strchr(s, 'l');

	if (strcmp(new_s, strchr(s, 'l')))
		pass = 0;

	if (strcmp(new_s-2, strchr(s, 'l')-2))
		pass = 0;
	tests__print("test_ft_strchr_2", pass);

}

void	test_ft_strchr_3(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strchr(s, 's');

	if (new_s)
		pass = 0;
	tests__print("test_ft_strchr_3", pass);
}

void	test_ft_strchr_4(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strchr(s, '\0');

	if (strcmp(new_s, strchr(s, '\0')))
		pass = 0;
	if (strcmp(new_s-2, strchr(s, '\0')-2))
		pass = 0;
	tests__print("test_ft_strchr_4", pass);
}

void	test_ft_strchr_5(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strchr(s, 't' + 256);

	if (strcmp(new_s, strchr(s, 't' + 256)))
		pass = 0;
	if (strcmp(new_s-2, strchr(s, 't' + 256)-2))
		pass = 0;
	tests__print("test_ft_strchr_5", pass);
}

void single_test_strchr(int test_number, char *str, int ch)
{
	char *res = ft_strchr(str, ch);
	char *res_std = strchr(str, ch);
	printf("%d\tres: \t%s\texp: \t%s\n",test_number, res, res_std);

	return ;
}

int test_strchr(void)
{
	int res = 1;

	single_test_strchr(1,"teste", 't');
	single_test_strchr(2,"teste", 'e');
	single_test_strchr(3, "teste", '\0');
	single_test_strchr(4, "teste", 'a');
	single_test_strchr(5, "teste", 'e' + 256);
	single_test_strchr(6, "teste", 1024);

	return res;
}


void	tests_ft_strchr(void)
{
	test_ft_strchr_1();
	test_ft_strchr_2();
	test_ft_strchr_3();
	test_ft_strchr_4();
	test_ft_strchr_5();
	test_strchr();
}

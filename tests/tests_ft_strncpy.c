/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strncpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:52:50 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/12 21:52:50 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strncpy.c"

void test_ft_strncpy_1(void)
{
	int pass;
	char src[] = "Hello";
	char dest[] = "World1";
	char *res = ft_strncpy(dest, src, 3);

	pass = 1;
	if (ft_strncmp(res, "Helld1", 6))
		pass = 0;
	tests__print("test_ft_strncpy_1", pass);

}

void test_ft_strncpy_2(void)
{
	int pass;
	char src[] = "Hello";
	char dest[] = "World1";
	char *res = ft_strncpy(dest, src, 5);

	pass = 1;
	if (ft_strncmp(res, "Hello1", 6))
		pass = 0;
	tests__print("test_ft_strncpy_2", pass);

}

void test_ft_strncpy_3(void)
{
	int pass;
	char src[] = "Hello";
	char dest[] = "World1";
	char *res = ft_strncpy(dest, src, 7);

	pass = 1;
	if (ft_strncmp(res, "Hello", 6))
		pass = 0;
	tests__print("test_ft_strncpy_3", pass);

}

void tests_ft_strncpy(void)
{
	test_ft_strncpy_1();
	test_ft_strncpy_2();
	test_ft_strncpy_3();
}

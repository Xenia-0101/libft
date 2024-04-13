/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strrchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:52:53 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/13 15:52:53 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strrchr.c"

void	test_ft_strrchr_1_occurs_once(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strrchr(s, 't');

	if (strcmp(new_s, strrchr(s, 't')))
		pass = 0;

	if (strcmp(new_s-2, strrchr(s, 't')-2))
		pass = 0;
	tests__print("test_ft_strrchr_1_occurs_once", pass);

}

void	test_ft_strrchr_2_occurs_twice(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strrchr(s, 'l');

	if (strcmp(new_s, strrchr(s, 'l')))
		pass = 0;

	if (strcmp(new_s-2, strrchr(s, 'l')-2))
		pass = 0;
	tests__print("test_ft_strrchr_2_occurs_twice", pass);

}

void	test_ft_strrchr_3_not_in_string(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strrchr(s, 's');

	if (new_s)
		pass = 0;
	tests__print("test_ft_strrchr_3_not_in_string", pass);
}

void	test_ft_strrchr_4_terminator(void)
{
	int pass = 1;
	const char *s = "hello there";
	char *new_s = ft_strrchr(s, '\0');

	if (strcmp(new_s, strrchr(s, '\0')))
		pass = 0;
	if (strcmp(new_s-2, strrchr(s, '\0')-2))
		pass = 0;
	tests__print("test_ft_strrchr_4_terminator", pass);
}

void tests_ft_strrchr(void)
{
 test_ft_strrchr_1_occurs_once();
 test_ft_strrchr_2_occurs_twice();
 test_ft_strrchr_3_not_in_string();
 test_ft_strrchr_4_terminator();
}

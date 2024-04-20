/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:57:54 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/18 18:57:54 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strjoin.c"

static int	fft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void test_ft_strjoin_1_two_strings(void)
{
	int		pass = 1;
	char	*join = ft_strjoin("hello", " there");

	if (!join || fft_strcmp(join, "hello there"))
		pass = 0;
	tests__print("test_ft_strjoin_1_two_strings", pass);
}

void test_ft_strjoin_2_first_empty(void)
{
	int		pass = 1;
	char	*join = ft_strjoin("", " there");

	if (!join || fft_strcmp(join, " there"))
		pass = 0;
	tests__print("test_ft_strjoin_2_first_empty", pass);
}

void test_ft_strjoin_3_second_empty(void)
{
	int		pass = 1;
	char	*join = ft_strjoin("hello", "");

	if (!join || fft_strcmp(join, "hello"))
		pass = 0;
	tests__print("test_ft_strjoin_3_second_empty", pass);
}

void test_ft_strjoin_4(void)
{
	int		pass = 1;
	char	*s1 = ft_calloc(0, 0);
	char	*join = ft_strjoin(s1, "hey");

	if (!join || fft_strcmp(join, "hey"))
		pass = 0;
	tests__print("test_ft_strjoin_4", pass);
}

void tests_ft_strjoin(void)
{
	test_ft_strjoin_1_two_strings();
	test_ft_strjoin_2_first_empty();
	test_ft_strjoin_3_second_empty();
	test_ft_strjoin_4();
}

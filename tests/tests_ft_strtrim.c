/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strtrim.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:15:48 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 19:15:48 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strtrim.c"

void	test_ft_strtrim_1(void)
{
	int			pass = 1;
	const char	*s1 = "aaababababbabbHelloWorldabaabbaabbaba";
	const char	*set = "ab";
	const char	*exp = "HelloWorld";
	char		*res = ft_strtrim(s1, set);

	if (!res || ft_strcmp(res, exp))
		pass = 0;
	tests__print("test_ft_strtrim_1", pass);
}

void	test_ft_strtrim_2(void)
{
	int			pass = 1;
	const char	*s1 = "aaababababbabbHelloabWorldabaabbaabbaba";
	const char	*set = "ab";
	const char	*exp = "HelloabWorld";
	char		*res = ft_strtrim(s1, set);

	if (!res || ft_strcmp(res, exp))
		pass = 0;
	tests__print("test_ft_strtrim_2", pass);
}

void	test_ft_strtrim_3(void)
{
	int			pass = 1;
	const char	*s1 = "HelloWorldabaabbaabbaba";
	const char	*set = "ab";
	const char	*exp = "HelloWorld";
	char		*res = ft_strtrim(s1, set);

	if (!res || ft_strcmp(res, exp))
		pass = 0;
	tests__print("test_ft_strtrim_3", pass);
}

void	test_ft_strtrim_4(void)
{
	int			pass = 1;
	const char	*s1 = "HelloabWorld";
	const char	*set = "ab";
	const char	*exp = "HelloabWorld";
	char		*res = ft_strtrim(s1, set);

	if (!res || ft_strcmp(res, exp))
		pass = 0;
	tests__print("test_ft_strtrim_4", pass);
}

void	test_ft_strtrim_5(void)
{
	int			pass = 1;
	const char	*s1 = "HelloWorld";
	const char	*set = ft_calloc(0, 0);
	const char	*exp = "HelloWorld";
	char		*res = ft_strtrim(s1, set);

	if (!res || ft_strcmp(res, exp))
		pass = 0;
	tests__print("test_ft_strtrim_5", pass);
}

void	test_ft_strtrim_6(void)
{
	int			pass = 1;
	const char	*exp = "";
	char		*res = ft_strtrim("   xxx   xxx", " x");

	if (!res || ft_strcmp(res, exp))
		pass = 0;
	tests__print("test_ft_strtrim_6", pass);
}

void	tests_ft_strtrim(void)
{
	test_ft_strtrim_1();
	test_ft_strtrim_2();
	test_ft_strtrim_3();
	test_ft_strtrim_4();
	test_ft_strtrim_5();
	test_ft_strtrim_6();
}

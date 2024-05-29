/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:24:57 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/20 21:24:57 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_split.c"

void test_ft_split_1(void)
{
	char **tab = ft_split("  born2code  42  ", ' ');
	int i = 0;
	while (tab[i])
	{
		printf(">>%s<<\n", tab[i]);
		i++;
	}
}

void test_ft_split_3(void)
{
	char **tab = ft_split("  born2code  42  ", 'x');
	int i = 0;
	while (tab[i])
	{
		printf(">>%s<<\n", tab[i]);
		i++;
	}
}

void test_ft_split_2(void)
{
	char **tab = ft_split("     ", ' ');
	int i = 0;
	while (tab[i])
	{
		printf(">>%s<<\n", tab[i]);
		i++;
	}
}

void tests_ft_split(void)
{
	test_ft_split_1();
	test_ft_split_2();
	test_ft_split_3();

}

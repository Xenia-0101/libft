/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:48:01 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 11:48:01 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_isprint.c"

void test_ft_isprint_1_nonprintables(void)
{
	int i;
	int pass;

	i = 0;
	pass = 1;
	while(i++ < 32)
		if (ft_isprint(i) == isprint(i))
		{
			pass = 0;
			tests__print("test_ft_isprint_1_nonprintables", pass);
			printf("\t%c", i);
		}
	if (pass)
		tests__print("test_ft_isprint_1_nonprintables", pass);
}

void test_ft_isprint_2_printables(void)
{
	int i;
	int pass;

	i = 32;
	pass = 1;
	while(i++ < 32)
		if (!ft_isprint(i))
		{
			pass = 0;
			tests__print("test_ft_isprint_2_printables", pass);
			printf("\t%c", i);
		}
	if (pass)
		tests__print("test_ft_isprint_2_printables", pass);
		
}

void tests_ft_isprint(void)
{
	test_ft_isprint_1_nonprintables();
	test_ft_isprint_2_printables();
}


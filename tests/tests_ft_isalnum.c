/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_isalnum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:36:02 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 09:36:02 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_isalnum.c"

void test_isalnum_one(char input)
{
	printf("input:\t>>%c<<\n\texp:\t>>%d<<\n\tres:\t>>%d<<\n", input, isalnum(input), ft_isalnum(input));
}

void tests_ft_isalnum(void)
{
	test_isalnum_one(' ');
	test_isalnum_one('\\');
	test_isalnum_one('/');
	test_isalnum_one('9');
	test_isalnum_one('A');
	test_isalnum_one('z');
	test_isalnum_one(9);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_toupper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:32:50 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 13:32:50 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_toupper.c"

void	test_ft_toupper(void)
{
	int i;
	int pass;

	i = 0;
	pass = 1;
	while (i++ < 127)
	{
		if (ft_toupper(i) != toupper(i))
		{
			pass = 0;
			tests__print("test_ft_toupper", pass);
			printf("\t%d\n", i);
		}
	}
	tests__print("test_ft_toupper", pass);
}

void	tests_ft_toupper(void)
{
	test_ft_toupper();
}

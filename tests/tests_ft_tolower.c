/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_tolower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:53:45 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/11 13:53:45 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_tolower.c"

void	test_ft_tolower(void)
{
	int i;
	int pass;

	i = 0;
	pass = 1;
	while (i++ < 127)
	{
		if (ft_tolower(i) != tolower(i))
		{
			pass = 0;
			tests__print("test_ft_tolower", pass);
			printf("\t%d\n", i);
		}
	}
	tests__print("test_ft_tolower", pass);
}

void	tests_ft_tolower(void)
{
	test_ft_tolower();
}

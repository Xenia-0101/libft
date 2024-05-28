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
	tests__print("test_ft_tolower", pass);
	while (i++ < 127)
	{
		printf("res:\t>>%c<<\texp:\t>>%c<<\n", ft_tolower(i), tolower(i));
	}
}

void	tests_ft_tolower(void)
{
	test_ft_tolower();
}

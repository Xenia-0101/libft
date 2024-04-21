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

void tests_ft_split(void)
{
	const char *s = "aa bbb cccc";
	char c = ' ';
	char **res = ft_split(s, c);

	printf("%s", res[0]);
	printf("%s", res[1]);
	printf("%s\n", res[2]);
}

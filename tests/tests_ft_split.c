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
	const char *s = "One Two Three Four";
	char c = ' ';
	char **res = ft_split(s, c);

	printf("%s", res[0]);
	printf("%s", res[1]);
	printf("%s", res[2]);
	printf("%s\n", res[3]);

	char *t_s = "One Two Three Four";
	const char *t_c = " ";
	char **t_res = strtok(t_s, t_c);
	printf("%s", t_res[0]);
	// int i = 0;

	// while (res[i])
	// {
	// 	printf("%d\t%s\n", i, res[i]);
	// 	i++;
	// }
}

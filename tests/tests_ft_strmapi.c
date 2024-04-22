/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strmapi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:12:17 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/22 19:12:17 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strmapi.c"

char make_uppercase(unsigned int i, char c)
{
	printf("%d\n", i);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	tests_ft_strmapi(void)
{
	const char *s = "Hello :)";
	char *new_s = ft_strmapi(s, make_uppercase);
	printf("%s\n", new_s);

}

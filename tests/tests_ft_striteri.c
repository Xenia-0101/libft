/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_striteri.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:05:56 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/22 20:05:56 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_striteri.c"

static void make_uppercase(unsigned int i, char *c)
{
	char new;
	printf("%d\n", i);
	if (*c >= 'a' && *c <= 'z')
	{
		new = *c - 32;
		c = &new;
	}
}

void	tests_ft_striteri(void)
{
	char *s = "Hello there ! :)";

	printf("%s\n", s);
	ft_striteri(s, make_uppercase);
	printf("%s\n", s);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_putchar_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:05:45 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/23 18:05:45 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_putchar_fd.c"

void	tests_ft_putchar_fd(void)
{
	char *text_to_write = "          ^\n       _(   )_\n      ( `\\ /' )\n        _)^(_\n          V\n";
	while (*text_to_write)
	{
		ft_putchar_fd(*text_to_write, 1);
		text_to_write++;
	}
}

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
	char *file_name = "test_putchar.txt";
	char *text_to_write = "          ^\n       _(   )_\n      ( `\\ /' )\n        _)^(_\nejm       V";
	int fd = open(file_name, O_RDWR);
	while (*text_to_write)
	{
		ft_putchar_fd(*text_to_write, fd);
		text_to_write++;
	}
	close(fd);
}

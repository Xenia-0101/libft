/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_putstr_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:10:56 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/23 19:10:56 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_putstr_fd.c"

void	tests_ft_putstr_fd(void)
{
	char *file_name = "test_putstr.txt";
	char *text_to_write = "          ^\n       _(   )_\n      ( `\\ /' )\n        _)^(_\nejm       V";
	int fd = open(file_name, O_RDWR | O_CREAT);
	ft_putstr_fd(text_to_write, fd);
	close(fd);

}

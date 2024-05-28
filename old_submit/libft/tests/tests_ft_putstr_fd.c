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
	char *text_to_write = "          ^\n       _(   )_\n      ( `\\ /' )\n        _)^(_\n          V\n";
	int fd = 1;
	ft_putstr_fd(text_to_write, fd);

}

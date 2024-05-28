/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_putnbr_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:44:57 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/23 19:44:57 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_putnbr_fd.c"

void	tests_ft_putnbr_fd(void)
{
	int fd = 1;
	ft_putnbr_fd(1789, fd);
	printf("\n");
	ft_putnbr_fd(-1789, fd);
	printf("\n");
	ft_putnbr_fd(0, fd);
	printf("\n");
	ft_putnbr_fd(-2147483648, fd);
	printf("\n");
}

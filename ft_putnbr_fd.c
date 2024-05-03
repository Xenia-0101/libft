/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:27:01 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/23 19:27:01 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Parameters
		n: The integer to output.
		fd: The file descriptor on which to write.

	Return value
		None

	External functs.
		write

	Description
		Outputs the integer ’n’ to the given file
		descriptor.
*/

#include "libft.h"

static void ft_putnbr(int n, int fd)
{
	char c;

	if (n > 0)
	{
		ft_putnbr(n / 10, fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-1 * n, fd);
	}
	else if (n == 0)
		write(fd, "0", 1);
	else
		ft_putnbr(n, fd);
}

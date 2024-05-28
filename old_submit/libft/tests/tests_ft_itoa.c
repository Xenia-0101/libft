/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:27:32 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/21 13:27:32 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_itoa.c"
#include "../ft_strdup.c"

void	tests_ft_itoa(void)
{
	printf("285:\t%s\n", ft_itoa(285));
	printf("-285:\t%s\n", ft_itoa(-285));
	printf("0:\t%s\n", ft_itoa(0));
	printf("-2147483648:\t%s\n", ft_itoa(-2147483648));
}

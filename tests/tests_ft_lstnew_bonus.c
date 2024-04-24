/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_lstnew_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:30:14 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/24 18:30:14 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_lstnew_bonus.c"

static int	fft_strcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void test_ft_lstnew_1_string(void)
{
	int pass = 1;

	t_list *list = ft_lstnew("hello");
	if (!list->content || fft_strcmp((char *)list->content, "hello"))
		pass = 0;
	else if (list->next)
		pass = 0;
	tests__print("test_ft_lstnew_1_string", pass);
}

void test_ft_lstnew_2_number(void)
{
	int pass = 1;
	int num = 123;

	t_list *list = ft_lstnew(&num);
	if (!list->content || *(int *)list->content != 123)
		pass = 0;
	else if (list->next)
		pass = 0;
	tests__print("test_ft_lstnew_2_number", pass);
}

void	tests_ft_lstnew_bonus(void)
{
	test_ft_lstnew_1_string();
	test_ft_lstnew_2_number();
}

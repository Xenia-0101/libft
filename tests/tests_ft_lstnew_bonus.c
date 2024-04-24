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
#include "../ft_lstadd_front_bonus.c"

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

void test_ft_lstadd_front_1(void)
{
	int pass  = 1;

	t_list *list = ft_lstnew("world");
	t_list *new_node = ft_lstnew("hello");
	ft_lstadd_front(&list, new_node);
	if (!list->content || !list->next)
		pass = 0;
	if (fft_strcmp((char *)list->content, "hello") ||
		fft_strcmp((char *)list->next, "world"))
		pass = 0;
	tests__print("test_ft_lstadd_front_1", pass);
}

void test_ft_lstadd_front_2(void)
{
	int pass  = 1;

	t_list *list = ft_lstnew("world");
	ft_lstadd_front(&list, list->next);
	if (!list->content || list->next)
		pass = 0;
	if (fft_strcmp((char *)list->content, "world"))
		pass = 0;
	tests__print("test_ft_lstadd_front_2", pass);
}

void	tests_ft_lstnew_bonus(void)
{
	test_ft_lstnew_1_string();
	test_ft_lstnew_2_number();

	test_ft_lstadd_front_1();
	test_ft_lstadd_front_2();

}

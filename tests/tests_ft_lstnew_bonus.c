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
#include "../ft_lstsize_bonus.c"
#include "../ft_lstlast_bonus.c"
#include "../ft_lstadd_back_bonus.c"
#include "../ft_lstdelone_bonus.c"

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

void test_ft_lstadd_front_1_one_new(void)
{
	int pass  = 1;

	t_list *list = ft_lstnew("world");
	t_list *new_node = ft_lstnew("hello");
	ft_lstadd_front(&list, new_node);
	if (!list->content || !list->next->content)
		pass = 0;
	if (fft_strcmp((char *)list->content, "hello") ||
		fft_strcmp((char *)list->next->content, "world"))
		pass = 0;
	tests__print("test_ft_lstadd_front_1_one_new", pass);
}

void test_ft_lstadd_front_2_empty_new(void)
{
	int pass  = 1;

	t_list *list = ft_lstnew("world");
	ft_lstadd_front(&list, list->next);
	if (!list->content || list->next)
		pass = 0;
	if (fft_strcmp((char *)list->content, "world"))
		pass = 0;
	tests__print("test_ft_lstadd_front_2_empty_new", pass);
}

void test_ft_lstadd_front_3_three_new(void)
{
	int pass  = 1;

	t_list *list = ft_lstnew("world");
	t_list *new_node = ft_lstnew("hello");
	t_list *next_node = ft_lstnew("!!!");
	ft_lstadd_front(&list, new_node);
	ft_lstadd_front(&list, next_node);
	if (!list->content || !list->next)
		pass = 0;
	if (fft_strcmp((char *)list->content, "!!!") ||
		fft_strcmp((char *)list->next->content, "hello") ||
		fft_strcmp((char *)list->next->next->content, "world"))
		pass = 0;
	tests__print("test_ft_lstadd_front_3_three_new", pass);
}

void test_ft_lstsize_1_three(void)
{
	int pass = 1;

	t_list *list = ft_lstnew("one");
	t_list *two = ft_lstnew("two");
	t_list *three = ft_lstnew("three");

	ft_lstadd_front(&list, two);
	ft_lstadd_front(&list, three);
	if (ft_lstsize(list) != 3)
		pass = 0;
	tests__print("test_ft_lstsize_1_three", pass);
}

void test_ft_lstsize_2_one(void)
{
	int pass = 1;

	t_list *list = ft_lstnew("one");

	if (ft_lstsize(list) != 1)
		pass = 0;
	tests__print("test_ft_lstsize_2_one", pass);
}

void test_ft_lstsize_3_none(void)
{
	int pass = 1;

	t_list *list = ft_lstnew(NULL);

	if (ft_lstsize(list) != 0)
		pass = 0;
	tests__print("test_ft_lstsize_3_none", pass);
}

void test_ft_lstlast_1(void)
{
	int pass = 1;

	t_list *list = ft_lstnew("one");
	t_list *two = ft_lstnew("two");
	t_list *three = ft_lstnew("three");

	ft_lstadd_front(&list, two);
	ft_lstadd_front(&list, three);

	char *res = (char *)ft_lstlast(list)->content;
	if (!res || fft_strcmp(res, "one"))
		pass = 0;

	tests__print("test_ft_lstlast_1", pass);
}

void test_ft_lstadd_back_1_one_new(void)
{
	int pass  = 1;

	t_list *list = ft_lstnew("hello");
	t_list *new_node = ft_lstnew("world");
	ft_lstadd_back(&list, new_node);
	if (!list->content || !list->next->content)
		pass = 0;
	if (fft_strcmp((char *)list->content, "hello") ||
		fft_strcmp((char *)list->next->content, "world"))
		pass = 0;
	tests__print("test_ft_lstadd_back_1_one_new", pass);
}

void test_ft_lstdelone_1 (void)
{

}

void	tests_ft_lstnew_bonus(void)
{
	test_ft_lstnew_1_string();
	test_ft_lstnew_2_number();

	test_ft_lstadd_front_1_one_new();
	test_ft_lstadd_front_2_empty_new();
	test_ft_lstadd_front_3_three_new();

	test_ft_lstsize_1_three();
	test_ft_lstsize_2_one();
	test_ft_lstsize_3_none();

	test_ft_lstlast_1();

	test_ft_lstadd_back_1_one_new();

	t_list *list = ft_lstnew("five");
	t_list *four = ft_lstnew("four");
	t_list *three = ft_lstnew("three");
	t_list *two = ft_lstnew("two");
	t_list *one = ft_lstnew("one");
	ft_lstadd_front(&list, four);
	ft_lstadd_front(&list, three);
	ft_lstadd_front(&list, two);
	ft_lstadd_front(&list, one);

	t_list *to_delete = list->next->next->next;
	ft_lstdelone(to_delete);
}

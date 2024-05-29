/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvislock <xvislock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:45:57 by xvislock          #+#    #+#             */
/*   Updated: 2024/04/12 18:45:57 by xvislock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../ft_strcpy.c"

static int	fft_strncmp(const char *s1, const char *s2, size_t n)
{

	while (n-- > 0 && *s1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

static int	fft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

void	test_ft_strcpy_1_equal(void)
{
	const char *src = "FGccjqWCcYr";
	char dest[12];
	char *res = ft_strcpy(dest, src);

	int pass = 1;
	if (fft_strncmp(res, src, fft_strlen((char *)src)))
		pass = 0;
	tests__print("test_ft_strcpy_1_equal", pass);
}

void	test_ft_strcpy_2_large_dest(void)
{
	const char *src = "gVepWWXynLOXqCHCscGrowUZSebdZIfy";
	char dest[40];
	char *res = ft_strcpy(dest, src);

	int pass = 1;
	if (fft_strncmp(res, src, fft_strlen((char *)src)))
		pass = 0;
	tests__print("test_ft_strcpy_2_large_dest", pass);
}

void	test_ft_strcpy_3_large_src(void)
{
	const char *src = "TcXF";
	char dest[4];
	char *res = ft_strcpy(dest, src);

	int pass = 1;
	if (fft_strncmp(res, src, fft_strlen((char *)src)))
		pass = 0;
	tests__print("test_ft_strcpy_3_large_src", pass);
}

void	tests_ft_strcpy(void)
{
	test_ft_strcpy_1_equal();
	test_ft_strcpy_2_large_dest();
	test_ft_strcpy_3_large_src();
}

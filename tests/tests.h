#ifndef TESTS_H
# define TESTS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>

// helpers
void	tests__print(const char *test, int passed);
void	(*get_function_pointer(char *name))();

// tests
void	tests__all(void);

void	tests_ft_atoi(void);
void	tests_ft_bzero(void);
void	tests_ft_isalnum(void);
void	tests_ft_isalpha(void);
void	tests_ft_isascii(void);
void	tests_ft_isdigit(void);
void	tests_ft_strlen(void);
void	tests_ft_memset(void);
void	tests_ft_memcpy(void);
void	tests_ft_memccpy(void);
void	tests_ft_strncmp(void);
void	tests_ft_memmove(void);
void	tests_ft_isprint(void);
void	tests_ft_toupper(void);
void	tests_ft_tolower(void);
void	tests_ft_strcpy(void);
void	tests_ft_strncpy(void);
void	tests_ft_strlcpy(void);
void	tests_ft_strlcat(void);
void	tests_ft_strchr(void);
void	tests_ft_strrchr(void);
void	tests_ft_memchr(void);
void	tests_ft_memcmp(void);
void	tests_ft_strnstr(void);
void	tests_ft_strcmp(void);
void	tests_ft_strdup(void);
void	tests_ft_strjoin(void);
void	tests_ft_strtrim(void);
void	tests_ft_split(void);
void	tests_ft_itoa(void);
void	tests_ft_strmapi(void);
void	tests_ft_striteri(void);
void	tests_ft_putchar_fd(void);


#endif

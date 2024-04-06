#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

int	ft_atoi(const char *nptr);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isspace(int c);
int ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

#endif

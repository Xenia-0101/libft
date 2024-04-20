NAME = app
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
SRCS = \
get_function_pointer.c \
tests__all.c \
tests__print.c \
main.c \
tests_ft_atoi.c \
tests_ft_bzero.c \
tests_ft_isalnum.c \
tests_ft_isalpha.c \
tests_ft_isascii.c \
tests_ft_isdigit.c \
tests_ft_isprint.c \
tests_ft_memccpy.c \
tests_ft_memchr.c \
tests_ft_memcmp.c \
tests_ft_memcpy.c \
tests_ft_memmove.c \
tests_ft_memset.c \
tests_ft_strchr.c \
tests_ft_strcmp.c \
tests_ft_strcpy.c \
tests_ft_strjoin.c \
tests_ft_strlcat.c \
tests_ft_strlcpy.c \
tests_ft_strlen.c \
tests_ft_strrchr.c \
tests_ft_strncmp.c \
tests_ft_strncpy.c \
tests_ft_strnstr.c \
tests_ft_substr.c \
tests_ft_tolower.c \
tests_ft_toupper.c \
tests_ft_strtrim.c \

OBJS = ${SRCS:.c=.o}


${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME} clean

.c.o: ${SRCS}
	${CC} ${CCFLAGS} -c $< -o ${<:.c=.o} -I includes

clean:
	rm -f -r ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all


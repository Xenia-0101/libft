NAME = app
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
SRCS = ${shell find *.c}
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


NAME = Canon
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	Fixed.cpp \
		main.cpp \

OBJS = ${SRCS:.cpp=.o}
all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

re: fclean all
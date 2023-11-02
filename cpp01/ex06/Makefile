NAME = harlFilter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		Harl.cpp \

OBJS = ${SRCS:.cpp=.o}
all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

re: fclean all
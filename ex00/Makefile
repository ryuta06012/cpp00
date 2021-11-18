NAME := megaphone

CXX_SRCS := megaphone.cpp

CXX_OBJS := ${CXX_SRCS:.c=.o}

CXX := clang++

CXXFLAGS := -Wall -Wextra -Werror

RM := rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} -o ${NAME} ${CXX_SRCS}

clean:
		${RM} ${OBJS}
fclean: clean
		${RM} ${NAME}

re: fclean all

.POHNY: all clean fclean re






.PHONY : all
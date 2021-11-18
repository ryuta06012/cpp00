NAME := phonebook

SRCS := main.cpp phone_book.cpp contact.cpp

HEADER := phonebook.hpp contact.hpp

OBJS := $(SRCS:.cpp=.o)

CXX := clang++

CXXFLAGS := -Wall -Wextra -Werror

RM := rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
#-I $(HEADER)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.POHNY: all clean fclean re
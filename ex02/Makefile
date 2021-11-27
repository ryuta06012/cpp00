NAME := test
CXX := clang++
CXXFLAGS := -Wall -Wextra -Werror -MMD -MP
SRCS := main.cpp phone_book.cpp contact.cpp
HEADER := Account.hpp
OBJS_DIR := obj/
OBJS := $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
DEPS := $(OBJS:.o=.d)

RM := rm -f

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

$(OBJS_DIR)%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $<
clean:
	rm -rf $(OBJS_DIR)
fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.POHNY: all clean fclean re
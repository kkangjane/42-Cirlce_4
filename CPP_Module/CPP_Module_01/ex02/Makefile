SRCS = main.cpp
OBJS = $(SRCS:%.cpp=%.o)
GCC = c++ -Wall -Wextra -Werror -std=c++98
NAME = hi_brain

%.o : %.cpp
	$(GCC) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(GCC) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	make clean
	rm -rf $(NAME)

re :
	make fclean
	make all
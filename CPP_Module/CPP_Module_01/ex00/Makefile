SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:%.cpp=%.o)
GCC = c++ -Wall -Wextra -Werror -std=c++98
NAME = zombie

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

.PHONY : all clean fclean re
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRCS:%.cpp=%.o)
GCC = c++ -Wall -Wextra -Werror -std=c++98
NAME = AB 

%.o : %.cpp
	$(GCC) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(GCC) $(OBJS) -o $(NAME)
	chmod +x $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	make clean
	rm -rf $(NAME)

re :
	make fclean
	make all
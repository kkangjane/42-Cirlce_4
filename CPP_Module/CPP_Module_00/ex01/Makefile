SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = $(SRCS:%.cpp=%.o)
CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = phonebook

%.o : %.cpp
	$(CC) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	make clean
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY = all clean fclean re
SRC = megaphone.cpp
CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re :
	make fclean
	make all

.PHONY = all clean fclean re
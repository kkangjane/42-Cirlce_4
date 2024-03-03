SRC = megaphone.cpp
GCC = c++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all : $(NAME)

$(NAME) : $(SRC)
	$(GCC) $(SRC) -o $(NAME)
	chmod +x $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re :
	make fclean
	make all
CC=clang++
SRC= mutantstack.cpp main.cpp
DEPS= $(SRC) 
CFLAGS=-Wall -Wextra -Werror --std=c++98
NAME=stack

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re test

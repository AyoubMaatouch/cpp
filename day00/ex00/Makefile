CC=clang++
SRC=megaphone.cpp
DEPS= $(SRC) 
CFLAGS=-Wall -Wextra -Werror --std=c++98
NAME=megaphone

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re test

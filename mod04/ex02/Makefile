CC=clang++
SRC=Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
DEPS= $(SRC) 
CFLAGS=-Wall -Wextra -Werror --std=c++98
NAME=Abstract

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re test

CC=clang++
SRC=Zombie.cpp main.cpp ZombieHorde.cpp
DEPS= $(SRC) 
CFLAGS=-Wall -Wextra -Werror --std=c++98
NAME=zombieHorde

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re test

CC=clang++
SRC=ClapTrap.cpp ScavTrap.cpp  main.cpp 
DEPS= $(SRC) 
CFLAGS=-Wall -Wextra -Werror --std=c++98
NAME=Serena

all: $(NAME)

$(NAME): $(DEPS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re test

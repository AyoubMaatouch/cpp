#include "Phonebook.hpp"

int main (void)
{
	Phonebook instance;
	std::string cmd;

	int i = -1;
	while (true)
	{   
		if (i == 7)
			i = -1; 
		std::cout<<"Enter your input:"<<std::endl;
		std::getline(std::cin, cmd);
		check_eof(std::cin.eof());
		if (cmd == "ADD")
			  instance = ft_adding(instance, ++i);
		else if (cmd == "SEARCH")
			   ft_search(instance);
		else if (cmd == "EXIT") 
			return EXIT_SUCCESS;
		else
			std::cout<<"You can ONLY use : ADD, SEARCH, EXIT."<<std::endl;

	}   
	return EXIT_SUCCESS;
}
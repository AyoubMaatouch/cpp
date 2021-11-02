#include "Phonebook.hpp"

Phonebook::~Phonebook(void)
{
    std::cout<<"dest Called\n";
    return;
}

Phonebook::Phonebook(void)
{
    std::cout<<"Const Called\n";
    return;
}

int main (void)
{
    // Phonebook inst;
    while (true)
    {
        std::string cmd;
        std::cout<<"Enter your input"<<std::endl;
        std::cin>>cmd;
        if (cmd == "ADD")
            ft_adding();
        else if (cmd == "SEARCH")
            ft_search();
        else if (cmd == "EXIT")
            return EXIT_SUCCESS;

    }
    return 0;

}
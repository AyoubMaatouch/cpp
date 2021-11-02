#include "Phonebook.hpp"

Phonebook ft_adding(Phonebook phonebook, int i)
{
    if (i < 8)
    {
        std::cout<<"Whats Your first name ?"<<std::endl;
        std::cin >> phonebook.myphonebook[i].first_name;
        std::cout<<"Whats Your last name ?"<<std::endl;
        std::cin >> phonebook.myphonebook[i].last_name;
        std::cout<<"Provide a nickname for you."<<std::endl;
        std::cin >> phonebook.myphonebook[i].nickname;
        std::cout<<"Tell me your darkest secret."<<phonebook.myphonebook[i].nickname<<std::endl;
        std::cin >> phonebook.myphonebook[i].darkest_secret;
    }
    else
        std::cout<<"Your Phonebook has reached it's Limets"<<std::endl;
    return phonebook;
}

int ft_search(Phonebook phonebook)
{
    int i = 0;
    while (i < 8 )
    {
        std::cout <<"first"<<phonebook.myphonebook[0].first_name<<std::endl;
        std::cout <<"Last"<<phonebook.myphonebook[0].last_name<<std::endl;
        i++;
    }
    
    return EXIT_SUCCESS;
}

int main (void)
{
    Phonebook instance;
    std::string cmd;
    int i = -1;
    while (true)
    {    
        std::cout<<"Enter your input"<<std::endl;
        std::cin>>cmd;
        if (cmd == "ADD")
              instance = ft_adding(instance, ++i);
        else if (cmd == "SEARCH")
             ft_search(instance);
        else if (cmd == "EXIT") 
            return EXIT_SUCCESS;
        else
            std::cout<<"You can ONLY use : ADD, SEARCH, EXIT."<<std::endl;

    }
    return 0;

}
#include "Phonebook.hpp"

void    check_eof(bool eof)
{
    if (eof)
    exit(1);
}

Phonebook ft_adding(Phonebook phonebook, int i)
{
    if (i < 8)
    {
        std::string data;

        std::cout<<"Whats Your first name ?"<<std::endl;
        getline(std::cin, data);
        check_eof(std::cin.eof());
        phonebook.myphonebook[i].set_Fname(data);
        std::cout<<"Whats Your last name ?"<<std::endl;
        getline(std::cin, data);
        check_eof(std::cin.eof());
        phonebook.myphonebook[i].set_Lname(data);
        std::cout<<"Provide a nickname for you."<<std::endl;
        getline(std::cin, data);
        check_eof(std::cin.eof());
        phonebook.myphonebook[i].set_Nname(data);
        std::cout<<"What's Your Phone Number ?"<<std::endl;
        getline(std::cin, data);
        check_eof(std::cin.eof());
        phonebook.myphonebook[i].set_Phone(std::stoi(data));
        std::cout<<"Tell me your darkest secret."<<std::endl;
        getline(std::cin, data);
        check_eof(std::cin.eof());
        phonebook.myphonebook[i].set_Dsecret(data);
    }
    else
        std::cout<<"Your Phonebook has reached it's Limets"<<std::endl;
    return phonebook;
}

int ft_search(Phonebook phonebook)
{
    for (int i = 0; i < 8 && !(phonebook.myphonebook[i].get_Fname().empty()); i++)
    {
        std::cout<<phonebook.myphonebook[i].get_Fname()<<"|";    
        std::cout<<phonebook.myphonebook[i].get_Lname()<< "|";    
        std::cout<<phonebook.myphonebook[i].get_Nname()<<"|";    
        std::cout<<phonebook.myphonebook[i].get_Phone()<<"|";    
        std::cout<<phonebook.myphonebook[i].get_Dsecret()<<std::endl;
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
    return 0;

}
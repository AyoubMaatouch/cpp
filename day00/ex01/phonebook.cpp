#include "Phonebook.hpp"

void    check_eof(bool eof)
{
    if (eof)
        exit(1);
}
bool isNumber(std::string str)
{
    for (int i = 0; str[i] ; i++) {
        if (std::isdigit(str[i]) == 0) return false;
    }
    return true;
}

std::string  print_value(std::string data)   
{
    if (data.length() > 10)
        {
            std::string str;
            
            str.append(data, 0, 9);
            str.insert(9, ".");
            return str;
        }
    else
        return data;

}

int  print_contact(Contact cont)
{
    std::cout<<cont.get_Fname()<<std::endl;
    std::cout<<cont.get_Lname()<<std::endl;
    std::cout<<cont.get_Nname()<<std::endl;
    std::cout<<cont.get_Phone()<<std::endl;
    std::cout<<cont.get_Dsecret()<<std::endl;
    return EXIT_SUCCESS;
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
        while (!isNumber(data))
        {
            std::cout<<"Please ENTER A VALID Phone Number !"<<std::endl;
            getline(std::cin, data);
            check_eof(std::cin.eof());    
        }
        phonebook.myphonebook[i].set_Phone(std::stol(data));
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
    if (phonebook.myphonebook[0].get_Fname().empty())
        {
            std::cout<<"Your Phonebook is empty"<<std::endl;
            return EXIT_SUCCESS;
        }
    else
    {
        for (int i = 0; i < 8 && !(phonebook.myphonebook[i].get_Fname().empty()); i++)
        {
            for (int j = 0; j < 44; j++)
                std::cout<<"-";
            std::cout<< std::endl;
            std::cout<< std::setw (10)<< i<<"|";    
            std::cout<< std::setw (10)<< print_value(phonebook.myphonebook[i].get_Fname())<<"|";    
            std::cout<< std::setw (10)<< print_value(phonebook.myphonebook[i].get_Lname())<<"|";    
            std::cout<< std::setw (10)<< print_value(phonebook.myphonebook[i].get_Nname())<<"|"<<std::endl;
        }
        while (true)
        {
            std::string input;

            std::cout << "index> ";         
            int index;
            getline(std::cin, input);
            check_eof(std::cin.eof());
            if (!isNumber(input))
                continue ;
            index = stoi(input);
            if (index < 0 &&  index > 8)
                std::cout << "insert a valid index."<<std::endl;
            else
                return print_contact(phonebook.myphonebook[index]);

        }
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
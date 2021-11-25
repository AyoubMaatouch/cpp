#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal was Constracted"<<std::endl;
    this->type = "Wrong Donkey";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)  {
    *this = src;
}; 

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    this->type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout <<"WrongAnimal was destroyed"<<std::endl;
}

void    WrongAnimal::makeSound()
{
    std::cout<<"Wrong Silent !!"<<std::endl;
}

 std::string WrongAnimal::getType()
 {
     return this->type;
 }
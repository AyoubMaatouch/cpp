#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal was Constracted"<<std::endl;
    this->type = "Donkey";
}

Animal::Animal(Animal const &src)  {
    *this = src;
}; 

Animal& Animal::operator=(const Animal& src)
{
    this->type = src.type;
    return *this;
}

Animal::~Animal(void)
{
    std::cout <<"Animal was destroyed"<<std::endl;
}

void    Animal::makeSound()
{
    std::cout<<"Silent"<<std::endl;
}

 std::string Animal::getType()
 {
     return this->type;
 }
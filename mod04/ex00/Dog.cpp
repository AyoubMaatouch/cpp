#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog was Constracted"<<std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &src)  {
    *this = src;
}; 

Dog& Dog::operator=(const Dog& src)
{
    this->type = src.type;
    return *this;
}

Dog::~Dog(void)
{
    std::cout <<"Dog was destroyed"<<std::endl;
}

void    Dog::makeSound()
{
    std::cout<<"Bark Bark !!"<<std::endl;
}
 std::string Dog::getType()
 {
     return this->type;
 }
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

 std::string Animal::getType() const
 {
     return this->type;
 }
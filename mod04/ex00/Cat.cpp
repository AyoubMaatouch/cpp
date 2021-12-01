#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat was Constracted"<<std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &src)  {
    *this = src;
}; 

Cat& Cat::operator=(const Cat& src)
{
    this->type = src.type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout <<"Cat was destroyed"<<std::endl;
}

void    Cat::makeSound() const
{
    std::cout<<"Meow Meow !!"<<std::endl;
}

 std::string Cat::getType() const
 {
     return this->type;
 }
#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat was Constracted"<<std::endl;
    this->type = "Cat";
    this->Cbrain = new Brain();
}

Cat::Cat(Cat const &src)  {
    *this = src;
}; 

Cat& Cat::operator=(const Cat& src)
{
    this->type = src.type;
    delete this->Cbrain;
    this->Cbrain = new Brain(*(src.Cbrain));
    return *this;
}

Cat::~Cat(void)
{
    delete this->Cbrain;
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
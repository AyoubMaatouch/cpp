#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat was Constracted"<<std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)  {
    *this = src;
}; 

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    this->type = src.type;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout <<"WrongCat was destroyed"<<std::endl;
}

void    WrongCat::makeSound()
{
    std::cout<<"Wrong Meow Meow !!"<<std::endl;
}

 std::string WrongCat::getType()
 {
     return this->type;
 }
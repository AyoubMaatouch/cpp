#include "Dog.hpp"

Dog::Dog()
{
	std::cout<<"Dog was Constracted"<<std::endl;
	this->type = "Dog";
	this->Dbrain = new Brain();
}

Dog::Dog(Dog const &src)  {
	*this = src;
}; 

Dog& Dog::operator=(const Dog& src)
{
	
	this->type = src.type;
	delete this->Dbrain;
	this->Dbrain = new Brain(*(src.Dbrain));
	return *this;
}

Dog::~Dog(void)
{
	delete this->Dbrain;
	std::cout <<"Dog was destroyed"<<std::endl;
}

void    Dog::makeSound() const
{
	std::cout<<"Bark Bark !!"<<std::endl;
}
 std::string Dog::getType() const
 {
	 return this->type;
 }
 Brain* Dog::getAdress(void) {

	 return this->Dbrain;

 }
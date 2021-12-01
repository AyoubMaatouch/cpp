
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout <<std::endl;
    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();
    
    std::cout <<std::endl<<meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl<< std::endl;

    std::cout << beta->getType() << " " << std::endl;
    std::cout << x->getType() << " " << std::endl<< std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout <<std::endl;
    x->makeSound();
    beta->makeSound();
    std::cout <<std::endl;
    
    delete meta;
    delete j;
    delete i;
    std::cout <<std::endl;
    delete beta;
    delete x;
}
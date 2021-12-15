#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    
    /*---------------[Tesing Abstract class]---------------------*/
    // Animal animal;

    /*---------------[Tesing DEEP copy]-------------------------*/

    std::cout << "------------------" << std::endl;

    Cat cat1;
    Cat cat2(cat1);
    std::cout << cat1.getType() << std::endl;
    std::cout << cat2.getType() << std::endl;

    std::cout << "------------------" << std::endl;
    return 0;
}
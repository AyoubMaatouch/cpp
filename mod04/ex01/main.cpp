#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{   
    // Animal *animals[2];
    
    // for (int i = 0; i < 2; i++)
    // {
    //     if (i / 2)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }
    std::cout << "-----------" << std::endl;
    // for (int i = 0; i < 2; i++)
    //     delete animals[i];
   
    // std::cout << "-----------" << std::endl;
   
    //Deep Copy 
    
    Dog basic;
    Dog tmp = basic;
    
    std::cout<<basic.getAdress()<<std::endl;
    std::cout<<tmp.getAdress()<<std::endl;

    return 0;
}
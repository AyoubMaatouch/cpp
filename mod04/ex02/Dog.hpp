#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    private:
        Brain* Dbrain;
    public:
        Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        ~Dog();
        void makeSound() const;
        std::string getType() const;
};

#endif
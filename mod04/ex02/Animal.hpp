#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        virtual ~Animal() = 0;
        virtual void makeSound() const = 0;
        virtual std::string getType() const = 0;
        
};

#endif
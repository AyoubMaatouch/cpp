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
        virtual ~Animal();
        virtual void makeSound() const;
        virtual std::string getType() const;
        
};

#endif
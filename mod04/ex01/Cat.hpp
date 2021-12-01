#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    protected:
        Brain* Cbrain;
    public:
        Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        ~Cat();
        void   makeSound() const;
        std::string getType() const;
        Brain* getAdress();
};

#endif
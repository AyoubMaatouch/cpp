#include <iostream>


class Zombie {
    private:
        static int size;
    public:
        Zombie(void);
         int getSize(void)
            {
                return Zombie::size;
            }
        ~Zombie(void);      
};

Zombie::Zombie (void) {
    std::cout<< "const called"<<std::endl;
    this->size += 1;
}
Zombie::~Zombie (void) {
    std::cout<< "dest called"<<std::endl;
}
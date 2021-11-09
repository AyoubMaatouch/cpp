#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        std::string gun;
    public:
        HumanA(std::string name, Weapon Wp);
        void    attack(void);
        ~HumanA();
};
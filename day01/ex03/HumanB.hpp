#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        std::string gun;
    public:
        HumanB( std::string name );
        void    setWeapon(Weapon wp);
        void    attack(void);
        ~HumanB();
};
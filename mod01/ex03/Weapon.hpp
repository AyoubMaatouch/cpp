#if !defined(WEAPON_HPP)
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string& getType();
        void    setType( std::string set_type );

};

#endif // WEAPON_HPP

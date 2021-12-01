#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>


class ClapTrap {
    protected:
        
        std::string name;
        int hitpoints;
        int energy_points;
        int attack_damage;

    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ClapTrap operator=(ClapTrap const &clap);
        ~ClapTrap();
        void attack(std::string const & target);
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
        std::string get_name(void);
};

#endif
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   
    public: 
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap const &src);
        ScavTrap operator=(ScavTrap const &clap);
        ~ScavTrap();
        void guardGate();
        
};

#endif
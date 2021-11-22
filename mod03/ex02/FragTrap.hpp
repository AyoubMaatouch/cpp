#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
	
	public:
		FragTrap(std::string const &name);
        FragTrap(FragTrap const &src);
        FragTrap operator=(FragTrap const &clap);
        ~FragTrap();
		void highFivesGuys(void);

};

#endif
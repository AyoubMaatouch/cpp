#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	
	public:
		FragTrap(std::string const &name);
        FragTrap(FragTrap const &src);
        FragTrap operator=(FragTrap const &clap);
        ~FragTrap();
		void highFivesGuys(void);

};

#endif
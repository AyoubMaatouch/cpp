#include <iostream>


class ClapTrap {
    private:
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
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string get_name(void);
};
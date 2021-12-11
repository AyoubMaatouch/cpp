#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        Intern();
        Intern(Intern const &);
        void operator=(Intern const &);
        ~Intern();
        
        Form*   makeForm(std::string, std::string);
        
};

#endif
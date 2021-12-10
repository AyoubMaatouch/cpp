#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form {
    private:
        std::string  _target;
    public:
        ShrubberyCreationForm(std::string const);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
        ~ShrubberyCreationForm();
        void   execute(Bureaucrat const & executor) ;
};

#endif
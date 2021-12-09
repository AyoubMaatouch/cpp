#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;
class Bureaucrat;

class PresidentialPardonForm : public Form {
    private:
        std::string  _target;
    public:
        PresidentialPardonForm(std::string const);
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);
        ~PresidentialPardonForm();
        void  execute(Bureaucrat const & executor);
};

#endif
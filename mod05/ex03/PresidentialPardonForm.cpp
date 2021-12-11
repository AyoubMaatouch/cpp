#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("PrForm", 25, 5),
_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form("PrForm", 25, 5),
_target(src._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    this->_target = src._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void  PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (this->getSign())
    {
        if (this->getExeGrade() >= executor.getGrade())
        {
            std::cout<< this->_target <<" has been pardoned by Zafod Beeblebrox."<<std::endl;
        }
        else 
            throw GradeTooLowException();
    }
    else
        throw NotSigned();
}
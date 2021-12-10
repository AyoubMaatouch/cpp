#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form("RoboForm", 25, 5),
_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form("PrForm", 25, 5),
_target(src._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    this->_target = src._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void  RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (this->getSign())
    {
        if (this->getExeGrade() <= executor.getGrade())
        {
            srand(time(NULL));
   		    if (rand() % 2)
		    	std::cout << this->_target << " has been robotomized succesfully" << std::endl;
		    else
		    	std::cout << this->_target << " failed to robotomize" << std::endl;
        }
        else 
            throw GradeTooLowException();
    }
    else
        throw NotSigned();
}
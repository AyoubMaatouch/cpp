#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;
class Bureaucrat;

class RobotomyRequestForm : public Form {
    private:
        std::string  _target;
    public:
        RobotomyRequestForm(std::string const);
        RobotomyRequestForm(const RobotomyRequestForm&);
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);
        ~RobotomyRequestForm();
        void  execute(Bureaucrat const & executor);
};
#endif
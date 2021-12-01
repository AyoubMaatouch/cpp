#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
        (void)grade;
} 

Bureaucrat::Bureaucrat(const Bureaucrat  &src) : name(src.name), grade(src.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat  &src)
{
    this->grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){}
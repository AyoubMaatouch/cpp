#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
		if (grade < 1)
				throw GradeTooHighException ();
		else if (grade > 150)
				throw GradeTooLowException() ;
		this->grade = grade;
} 

Bureaucrat::Bureaucrat(const Bureaucrat  &src) : name(src.name), grade(src.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat  &src)
{
	this->grade = src.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::inGrade(void)
{
	this->grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::deGrade(void)
{
	this->grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(const Form &ref)
{
	if (ref.getSign() == true)
		std::cout << this->getName() <<" signs "<< ref.getName() <<std::endl;
	else
		std::cout << this->getName() <<" cannot sign "<< ref.getName() << " because grade is too Low"<<std::endl;

}
void	Bureaucrat::executeForm(Form const & form)
{
	if (form.getSign() && (this->grade == form.getExeGrade()))
		std::cout<< this->name <<" executes "<< form.getName()<<std::endl;
	else
	{
		if (!form.getSign())
			std::cout<< this->name <<" can't executes "<< form.getName()<<" Due to the Form not being Signed."<<std::endl;
		else if (this->grade > form.getExeGrade())
			std::cout<< this->name <<" can't executes "<< form.getName()<<" Due to the Low grade ."<<std::endl;
	}
	
}

std::ostream &operator<<(std::ostream& stream, Bureaucrat&  B) 
{
	stream <<B.getName()<<", bureaucrat grade "<< B.getGrade();
	return stream;
}
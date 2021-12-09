#include "Form.hpp"



Form::Form(std::string name, int Sgrade, int Egrade): _name(name), _Sgarde(Sgrade), _Egarde(Egrade)
{
    this->_sign = false;
    if (this->_Egarde > 150 && this->_Sgarde > 150)
        throw GradeTooLowException();
    if (this->_Egarde < 1 && this->_Sgarde < 1)
        throw GradeTooHighException();
}

Form::Form(const Form& src) : _name (src._name), _sign(false) , _Sgarde(src._Sgarde) , _Egarde(src._Egarde){};

Form& Form::operator=(const Form &src)
{
    if (this != &src)
        {
            this->_sign = src._sign;
        }
        return *this;
}

Form::~Form() {};

int Form::getSinGrade() const { return this->_Sgarde; };

int Form::getExeGrade() const { return this->_Egarde; };

bool Form::getSign() const {return this->_sign; };

std::string Form::getName() const { return this->_name; };

void Form::beSigned(Bureaucrat& ref)
{
    if (this->getSinGrade() < ref.getGrade())
        {
            ref.signForm((*this));
            throw GradeTooLowException();
        }
        else
        {
            this->_sign = true;
            ref.signForm((*this));
        }
}

std::ostream &operator<<(std::ostream& stream, Form& src)
{
    
    stream<< "Form is";
    if (src.getSign() == true)
        stream<<" is [Signed], [";
    else
        stream<<" [NOT Signed], [";
    stream<< src.getSinGrade() << "] Signing Grade, [";
    stream<< src.getExeGrade() << "] Executing Grade";

    return stream;
}
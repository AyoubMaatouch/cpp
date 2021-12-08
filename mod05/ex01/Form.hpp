#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;
 
class Form {
	private:
			std::string const _name;
			bool _sign;
			int const _Sgarde;            
			int const _Egarde;
	public:
		Form(std::string, int, int);
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();
		int getSinGrade() const;
		int getExeGrade() const ;
		bool getSign() const ;
		std::string getName() const;
		void beSigned(Bureaucrat&);
		class GradeTooHighException : public std::exception {
				 const char* what() const throw() {
					 return "Grade is Too High";
				 }
		};
		class GradeTooLowException : public std::exception {
				const char* what() const throw() {
					 return "Grade is Too Low";
				 }
		};
};
std::ostream &operator<<(std::ostream&, Form&);
#endif
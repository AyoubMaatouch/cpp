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
		/**[pure virtual function]**/
		virtual void execute(Bureaucrat const & executor)  = 0;
		/**[exception classes]**/
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
		
		class NotSigned : public std::exception {
				const char* what() const throw() {
					 return "Form Not Signed";
				 }
		};
};
std::ostream &operator<<(std::ostream&, Form&);
#endif
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
	private:
			std::string const name;
			bool sign;
			int const garde;            
	public:
		Form();
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();
		int getGrade();
		bool getSign();
		std::string getName();
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
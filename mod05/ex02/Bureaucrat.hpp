#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#include "Form.hpp"
class Form;

class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;

    public:
        Bureaucrat(std::string, int);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator=(const Bureaucrat &);
        ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;
        void        inGrade();
        void        deGrade();
        void signForm(const Form&);
        
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

std::ostream &operator<<(std::ostream&, Bureaucrat&);
#endif 
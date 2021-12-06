#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;

    public:
        Bureaucrat(std::string, int);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator=(const Bureaucrat &);
        ~Bureaucrat();
        std::string getName();
        int         getGrade();
        void        inGrade();
        void        deGrade();

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
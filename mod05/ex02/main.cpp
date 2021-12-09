#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{

    
    try 
    {
        Bureaucrat bac("ayoub", 5);
        ShrubberyCreationForm sher("Director");
        PresidentialPardonForm pre("Laarbi");
        RobotomyRequestForm rob("Cheat");

        pre.beSigned(bac);
        bac.executeForm(sher);
        bac.executeForm(rob);
        bac.executeForm(pre);
        // pre.execute(bac);
        // rob.beSigned(bac);
        // rob.execute(bac);
        // sher.beSigned(bac);
        // sher.execute(bac);        

    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }
        
        
        
        
        
        
        
   
    return 0;
}
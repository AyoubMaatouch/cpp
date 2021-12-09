#include "ShrubberyCreationForm.hpp"

/** [Tree]
 * 
 *           ###
           #o###
         #####o###
        #o#\#|#/###
         ###\|/#o#
          # }|{  #
[aymaatou]}  |{
 */

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Sh_Form", 145, 137),
 _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): Form("Sh_Form", 145, 137),
_target(src._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    this->_target = src._target;
    return *this;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->getSign())
    {
      if (this->getExeGrade() <= executor.getGrade())
      {
          std::ofstream myfile (this->_target + "_shrubbery");
          if (myfile.is_open())
          {
              myfile <<"            ###"<<std::endl;
              myfile <<"          #o###"<<std::endl;
              myfile <<"         #####o###"<<std::endl;
              myfile <<"        #o#\\#|#/###"<<std::endl;
              myfile <<"         ###\\|/#o#"<<std::endl;
              myfile << "         # }|{  #"<<std::endl;
              myfile <<"[aymaatou]}  |{"<<std::endl;
              myfile.close();
          }
          else
          {
              std::cout << "Unable To Create File" <<std::endl;
          }
      }
    }
    else
      throw NotSigned();
}
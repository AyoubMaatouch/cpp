#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"

class Phonebook 
{
	public:
		Contact myphonebook[8];
};
void    		check_eof(bool eof);
bool 			isNumber(std::string str);
std::string  	print_value(std::string data);
int  			print_contact(Contact cont);
Phonebook 		ft_adding(Phonebook phonebook, int i);
int 			ft_search(Phonebook phonebook);
#endif
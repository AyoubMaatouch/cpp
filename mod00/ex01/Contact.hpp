#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <iostream>
#include <iomanip> 
const std::string NOT_A_STRING = "";
class Contact 
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
	public:
		Contact();
		void set_Fname(std::string data);
		std::string  get_Fname (void);
		void set_Lname(std::string data);
		std::string  get_Lname (void);
		void set_Nname(std::string data);
		std::string  get_Nname (void);
		void set_Dsecret(std::string data);
		std::string  get_Dsecret (void);
		void set_Phone(std::string data);
		std::string  get_Phone (void);
};
#endif
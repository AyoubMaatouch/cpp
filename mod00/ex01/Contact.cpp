#include "Contact.hpp"

Contact::Contact (void ){
	phone_number = NOT_A_STRING ;   
	first_name = NOT_A_STRING;
	last_name = NOT_A_STRING;
	nickname = NOT_A_STRING;
	darkest_secret = NOT_A_STRING;
}
void Contact::set_Fname(std::string data){
			this->first_name = data;
		}
std::string  Contact::get_Fname (void)
		{
			return this->first_name;
		}
void Contact::set_Lname(std::string data){
			this->last_name = data;
		}
std::string  Contact::get_Lname (void)
		{
			return this->last_name;
		}
void Contact::set_Nname(std::string data){
			this->nickname = data;
		}
std::string  Contact::get_Nname (void)
		{
			return this->nickname;
		}
void Contact::set_Dsecret(std::string data){
			this->darkest_secret = data;
		}
std::string  Contact::get_Dsecret (void)
		{
			return this->darkest_secret;
		}
void Contact::set_Phone(std::string data){
			this->phone_number = data;
		}
std::string  Contact::get_Phone (void)
		{
			return this->phone_number;
		}
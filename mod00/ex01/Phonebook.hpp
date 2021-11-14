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
		Contact(void);
		void set_Fname(std::string data){
			this->first_name = data;
		}
		std::string  get_Fname (void)
		{
			return this->first_name;
		}
		void set_Lname(std::string data){
			this->last_name = data;
		}
		std::string  get_Lname (void)
		{
			return this->last_name;
		}
		void set_Nname(std::string data){
			this->nickname = data;
		}
		std::string  get_Nname (void)
		{
			return this->nickname;
		}
		void set_Dsecret(std::string data){
			this->darkest_secret = data;
		}
		std::string  get_Dsecret (void)
		{
			return this->darkest_secret;
		}
		void set_Phone(std::string data){
			this->phone_number = data;
		}
		std::string  get_Phone (void)
		{
			return this->phone_number;
		}
};

class Phonebook 
{
	public:
		Contact myphonebook[8];
};

Contact::Contact (void ){
	phone_number = NOT_A_STRING ;   
	first_name = NOT_A_STRING;
	last_name = NOT_A_STRING;
	nickname = NOT_A_STRING;
	darkest_secret = NOT_A_STRING;
}
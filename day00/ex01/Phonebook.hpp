#include <iostream>
#include <string>



class contact 
{
    public:
            std::string first_name;
            std::string last_name;
            std::string nickname;
            int phone_number;
            std::string darkest_secret;
};

class Phonebook 
{
    public:
        contact myphonebook[8];
};
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF =  *stringPTR; 

    std::cout<<"stringPTR :"<<*stringPTR<<std::endl;
    std::cout<<"stringPTR Adress:"<<stringPTR<<std::endl;
    std::cout<<"stringPTR :"<<stringREF<<std::endl;
    std::cout<<"stringREF Adress:"<<&stringREF<<std::endl;
}
#include <iostream>

int main(void)
{
    std::string stringPTR = "HI THIS IS BRAIN";
    std::string& stringREF =  stringPTR; 

    std::cout<<"stringPTR Adress:"<<&stringPTR<<std::endl;
    std::cout<<"stringREF Adress:"<<&stringREF<<std::endl;
    std::cout<<"stringPTR :"<<stringPTR<<std::endl;
    std::cout<<"stringPTR :"<<stringREF<<std::endl;
}
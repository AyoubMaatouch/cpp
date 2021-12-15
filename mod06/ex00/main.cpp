#include <iomanip>
#include <iostream>
#include <string>

/*
char: Non displayable
int: 0
float: 0.0f
double: 0.0
*/

bool for_science(std::string str)
{
    if (str == "inf" ||str == "+inf" || str == "-inf" || str == "-inff"|| str == "-inff")
        return true;
    return false;
}

bool isNumber(std::string s) throw (bool)
{
    if (s.find_first_not_of("-.f0123456789") != std::string::npos)
	    throw false;
    return true;
}

int main (int ac, char *av[])
{

    if (ac == 2 && !std::string(av[1]).empty())
    {
        try
        {
            /* code */
            if (for_science(av[1]) || isNumber(av[1]))
            {
                int var = static_cast<int>(std::atoi(std::string(av[1]).c_str()));
                std::cout << "char: " ;
                if (for_science(av[1]))
                    std::cout<<"impossible"<<std::endl;
                else
                    std::isalpha(var) != 0 ?  std::cout << static_cast<char>(var) <<std::endl:  std::cout <<"Non displayable"<<std::endl;
                std::cout << "int: ";
                for_science(av[1]) ? std::cout<<"impossible"<<std::endl: std::cout<< var <<std::endl;
                double x = static_cast<float>(std::atof(std::string(av[1]).c_str()));
                std::cout <<  "float: " << std::fixed << std::setprecision(1)<<x<<"f"<<std::endl;
                std::cout << "Double: " << std::fixed << std::setprecision(1)<<x <<std::endl;
            }
        }
        catch(...)
        {
        
            std::cout <<"char: impossible"<<std::endl;
            std::cout <<"int: impossible"<<std::endl;
            std::cout <<"float: nanf"<<std::endl;
            std::cout <<"double: nan" <<std::endl;
        }
    }
}


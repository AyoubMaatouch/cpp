#include <iostream>
#include <string>

int    main(void)
{
    std::string buff;
    std::cout << "Hi What is your name ?\n";
    std::getline(std::cin,buff);
    std::cout << buff << std::endl;
    return (0);
}



#include <iostream>
#define PRINT(OwO) std::cout << OwO << std::endl

template <typename T>
void easyfind(T &container, int value)
{
    for (int i = 0 ; container[i] ; i++)
    {
        if (container[i] == value)
        {
            PRINT("FOUND");
            return ;
        }
    }
    std::cout << "not found" << std::endl;
}
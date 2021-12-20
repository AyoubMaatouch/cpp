
#include <iostream>
#define PRINT(OwO) std::cout << OwO << std::endl

template <typename T>
void easyfind(T &container, int value)
{
  if(*(std::find(container.begin(), container.end(), value)) == value)
        PRINT("found");
    else
        PRINT("not found");
}
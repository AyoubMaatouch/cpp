
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{

    // try
    // {
    //     Array<int> abc(10);
	// 	abc[11] = 12;
    //     /* code */
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
		// std::cout << abc[1] << abc[5]<< std::endl;
    
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        
        mirror[i] = value;
    }
    // //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        //should be deleted after this Scoop
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        //sould be catched here
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 1998;
        std::cout << numbers[MAX_VAL] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
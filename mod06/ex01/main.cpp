#include <iostream>

struct Data {
    int var;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main  ()
{
    Data* value = new Data();    
    value->var = 8;
   
    uintptr_t x = serialize(value);
    std::cout << x << std::endl;
    std::cout << reinterpret_cast<uintptr_t>(value) << std::endl;

    Data* Ret = deserialize(x);    
    std::cout << Ret->var << std::endl;
}
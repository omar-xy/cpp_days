#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data *data = new Data("hello", 42, "world");
    uintptr_t ptr = Serializer::serialize(data);
    std::cout << "ptr: " << ptr << std::endl;

    Data *data2 = Serializer::deserialize(ptr);
    std::cout << "data2->s1: " << data2->getS1() << std::endl;
    std::cout << "data2->n: " << data2->getN() << std::endl;
    std::cout << "data2->s2: " << data2->getS2() << std::endl;
    delete data;
    return 0;
}
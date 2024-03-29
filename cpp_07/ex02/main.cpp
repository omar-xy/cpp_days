#include <iostream>
#include "Array.hpp"

#define MAX_VAL 17
int main(int, char**)
{
    Array<int>  numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = i % 3;
        numbers[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    try
    {
        std::cout << numbers[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
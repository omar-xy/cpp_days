#include "Array.hpp"

int main()
{
try
{
    Array<int> Arr(3);


    std::cout << Arr.size() << std::endl;
    std::cout << Arr[1] << std::endl;

}
catch (std::exception &e)
{
    std::cout << e.what() << std::endl;
}

}
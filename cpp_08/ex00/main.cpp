#include "easyfind.hpp"

int main()
{
    try
    {
        
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(1);
        v.push_back(4);
        v.push_back(3);
        easyfind(v, 1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
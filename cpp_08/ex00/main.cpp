#include "easyfind.hpp"
#include <deque>

int main()
{
    try
    {
        std::deque<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_front(18);
        v.push_back(1);
        v.push_back(4);
        v.push_back(3);
        easyfind(v, 18);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
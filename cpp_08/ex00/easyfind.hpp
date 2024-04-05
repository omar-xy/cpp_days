# pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Expetion : public std::exception
{
    public:
    
        virtual const char *what() const throw()
        {
            return ("Not found");
        }
};

template <typename T>
void easyfind(T &C, int n) 
{
    typename T::iterator it = std::find(C.begin(), C.end(), n);
   
    if (it != C.end())
    {
        std::cout << "Found " << n << " at position: " << std::distance(C.begin(), it) << std::endl;
    } 
    else 
    {
        throw Expetion();
    }
}

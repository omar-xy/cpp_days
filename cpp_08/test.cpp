#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#define ITERATOR_TYPE(C) typename C::iterator
class Expetion : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("Not found");
        }
};


    
template <typename T>
void easyfind(T &C, int n) {

    ITERATOR_TYPE(T) it = std::find(C.begin(), C.end(), n);


    if (it != C.end()) {
        std::cout << "Found " << n << " at position: " << std::distance(C.begin(), it) << std::endl;
    } else 
    {
        throw Expetion();
    }
}




int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    try
    {
        easyfind(v, 3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
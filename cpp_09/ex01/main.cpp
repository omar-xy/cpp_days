#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <cstring>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./rpn \"[expression]\"" << std::endl;
        return 1;
    }
    RPN rpn(av[1]);
    rpn.parse();
    return 0;
}

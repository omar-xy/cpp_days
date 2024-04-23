#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <cstring>


class RPN 
{
    public:
        RPN(const std::string& expression);
        void parse();

    private:
        std::string expression;
        std::stack<double> stack;
};

std::vector<std::string> split(const std::string& str, char delimiter);
#endif
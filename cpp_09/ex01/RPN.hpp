#pragma once

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

std::deque<std::string> split(const std::string& str, char delimiter);

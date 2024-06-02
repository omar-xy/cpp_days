#pragma once

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <cstring>


#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"

class RPN 
{
    public:
        RPN();
        RPN(const std::string& expression);
        RPN(const RPN& copy);
        ~RPN();
        RPN& operator=(const RPN& copy);
        void parse();

    private:
        std::string expression;
        std::stack<double> stack;
};

std::deque<std::string> split(const std::string& str, char delimiter);

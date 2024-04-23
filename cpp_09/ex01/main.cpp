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
    std::vector<std::string> tokens = split(av[1], ' ');
    std::stack<double> stack;
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error: Not enough operands" << std::endl;
                return 1;
            }
            double op2 = stack.top();
            stack.pop();
            double op1 = stack.top();
            stack.pop();
            if (tokens[i] == "+")
                stack.push(op1 + op2);
            else if (tokens[i] == "-")
                stack.push(op1 - op2);
            else if (tokens[i] == "*")
                stack.push(op1 * op2);
            else if (tokens[i] == "/")
            {
                if (op2 == 0)
                {
                    std::cerr << "Error: Division by zero" << std::endl;
                    return 1;
                }
                stack.push(op1 / op2);
            }
        }
        else
        {
            std::istringstream iss(tokens[i]);
            double value;
            if (!(iss >> value))
            {
                std::cerr << "Error: Invalid token" << std::endl;
                return 1;
            }
            stack.push(value);
        }
    }
    if (stack.size() != 1)
    {
        std::cerr << "Error: Invalid expression" << std::endl;
        return 1;
    }
    std::cout << stack.top() << std::endl;
    // RPN rpn(av[1]);
    // rpn.parse();
    return 0;
}

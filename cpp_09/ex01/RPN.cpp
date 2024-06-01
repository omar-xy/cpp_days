#include "RPN.hpp"

RPN::RPN(const std::string& expression) : expression(expression) {}

void RPN::parse() 
{
    std::string token;
    std::istringstream tokenStream(expression);
    while (std::getline(tokenStream, token, ' '))
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error: Not enough operands" << std::endl;
                return ;
            }
            double op2 = stack.top();
            stack.pop();
            double op1 = stack.top();
            stack.pop();
            if (token == "+")
                stack.push(op1 + op2);
            else if (token == "-")
                stack.push(op1 - op2);
            else if (token == "*")
                stack.push(op1 * op2);
            else if (token == "/")
            {
                if (op2 == 0)
                {
                    std::cerr << "Error: Division by zero" << std::endl;
                    return ;
                }
                stack.push(op1 / op2);
            }
        }
        else
        {
            std::istringstream iss(token);
            double value;
            if (!(iss >> value))
            {
                std::cerr << "Error: Invalid token" << std::endl;
                return ;
            }
            stack.push(value);
        }
    }
    if (stack.size() != 1)
    {
        std::cerr << "Error: Invalid expression" << std::endl;
        return ;
    }
    std::cout << stack.top() << std::endl;
}

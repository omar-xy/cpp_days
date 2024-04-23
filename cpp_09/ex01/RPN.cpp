#include "RPN.hpp"

RPN::RPN(const std::string& expression) : expression(expression) {}

void RPN::parse() 
{
    std::vector<std::string> tokens = split(expression, ' ');
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
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
                    return ;
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


std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}
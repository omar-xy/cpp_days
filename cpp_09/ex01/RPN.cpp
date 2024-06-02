#include "RPN.hpp"

RPN::RPN(const std::string& expression) : expression(expression)
{

}

RPN::RPN(const RPN& copy) : expression(copy.expression)
{

}

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
                std::cerr << GRE << "Error: Not enough operands" << WHI <<std::endl;
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
                    std::cerr << RED << "Error: Division by zero" << WHI <<std::endl;
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
                std::cerr << RED << "Error: Invalid token" << WHI <<std::endl;
                return ;
            }
            stack.push(value);
        }
    }
    if (stack.size() != 1)
    {
        std::cerr << RED << "Error: Invalid expression" << WHI <<std::endl;
        return ;
    }
    std::cout << YEL << stack.top() << WHI <<std::endl;
}

RPN::RPN()
{

}

RPN& RPN::operator=(const RPN& copy)
{
    if (this == &copy)
        return *this;
    expression = copy.expression;
    return *this;
}

RPN::~RPN()
{

}
 
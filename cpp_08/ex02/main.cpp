#include "MutantStack.hpp"


int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        std::cout<< *(mstack.begin())<<std::endl;
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {

        MutantStack<int, std::deque<int> > vectStack;
        vectStack.push(5);
        std::cout << vectStack.top();
        MutantStack<int>::iterator it = vectStack.begin();
        MutantStack<int>::iterator ite = vectStack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(vectStack);
    }
}
#include "Span.hpp"





int main()
{
    // {

    //     Span sp(1000);

    //     std::vector<int> arr;
    //     for(size_t i = 0; i < 1000; i++)
    //     {
    //         int a = rand();
    //         arr.push_back(a);
    //     }
    //     // std::vector<int>::iterator it = arr.begin();
    //     sp.addNumber(arr.begin(), arr.end());
    //     sp.show();
    //     // std::cout << "test\n"

    // }
    {
        Span sp = Span(5);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(12);
        std::cout << sp.shortestSpan() << std::endl;
    }


}

#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Usage: ./btc <input_file>" << std::endl;
    else
    {
        (void)av;
        BitcoinExchange btc;
    }
    
    return 0;
}
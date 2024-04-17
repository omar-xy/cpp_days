#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    std::ifstream csvFile("data.csv");
    if (!csvFile.is_open())
        std::cout << "faild to open the database file";
    csvFile.close();
    if (ac != 2)
        std::cout << "Usage: ./btc <input_file>" << std::endl;
    else
    {
        std::ifstream fileInput(av[1]);
        if (!fileInput.is_open())
            std::cout << "cannot open file" << std::endl;
        fileInput.close();
        BitcoinExchange btc;
        btc.parseFileInput(av[1]);
    }
    
    return 0;
}
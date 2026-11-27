#include <iostream>
#include "file_manager.hpp"
#include "conf.hpp"
int main()
{

    file_manager fm;
    while (true)
    {
        std::cout << "path to file: \n";
        std::getline(std::cin, directory);
        std::cout << "choose cr/encr: \n";
        std::cin >> cryptFlag;

        if (cryptFlag == "cr")
        {
            fm.crFile(directory);
            break;
        }
        else if (cryptFlag == "encr")
        {
            fm.encrFile(directory);
            break;
        }
        std::cout << "unknown command, try again\n";
    }
    return 0;
}

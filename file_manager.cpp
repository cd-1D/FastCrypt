#include "file_manager.hpp"
#include <iostream>
#include <fstream>
#include <ios>
void file_manager::encrFile(std::string directory)
{
    std::ifstream file(directory, std::ios::binary | std::ios::ate);
    if (file.is_open())
    {
        sizeFile = file.tellg();
        file.seekg(0);
        std::cout << "size file: " << sizeFile << "\n";
        std::vector<uint8_t> buffer(sizeFile);
        file.read(reinterpret_cast<char *>(buffer.data()), sizeFile);
        std::ofstream fileEncr("file.cr", std::ios::binary);
        if (fileEncr.is_open())
        {
            fileEncr.write(reinterpret_cast<char *>(buffer.data()), sizeFile);
        }
    }
    else
    {
        std::cout << "failed to open file.\n";
    }
}
void file_manager::crFile(std::string directory)
{
    std::ifstream file(directory, std::ios::binary | std::ios::ate);
    if (file.is_open())
    {
        sizeFile = file.tellg();
        file.seekg(0);
        std::cout << "size file: " << sizeFile << "\n";
        std::vector<uint8_t> buffer(sizeFile);
        file.read(reinterpret_cast<char *>(buffer.data()), sizeFile);

        std::ofstream fileCr("file.cr", std::ios::binary);
        if (fileCr.is_open())
        {
            fileCr.write(reinterpret_cast<char *>(buffer.data()), sizeFile);
        }
    }
    else
    {
        std::cout << "failed to open file.\n";
    }
}
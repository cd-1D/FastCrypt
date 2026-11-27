#pragma once
#include <vector>
#include <cstdint>
#include <ios>
class file_manager
{
private:
    
    std::streamsize sizeFile;
public:
    void encrFile(std::string directory);
    void crFile(std::string directory);
};

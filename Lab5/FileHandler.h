#pragma once
#include <string>
#include <fstream>

class FileHandler {
public:
    virtual void openFile(const std::string& filename) = 0;
    virtual void writeFile(const std::string& content) = 0;
    virtual std::string readFile() = 0;
    virtual ~FileHandler() {}
};
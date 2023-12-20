#pragma once
#include "FileHandler.h"

class TextFileHandler : public FileHandler {
private:
    std::fstream file;
public:
    void openFile(const std::string& filename) override;
    void writeFile(const std::string& content) override;
    std::string readFile() override;
};
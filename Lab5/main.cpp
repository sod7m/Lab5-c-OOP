#include "TextFileHandler.h"
#include <iostream>

int main() {
    TextFileHandler handler;
    handler.openFile("test.txt");
    handler.writeFile("Hello, World!");
    std::string content = handler.readFile();
    std::cout << content << std::endl;
    return 0;
}
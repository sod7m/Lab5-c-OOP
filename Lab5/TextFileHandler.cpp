#include "TextFileHandler.h"

void TextFileHandler::openFile(const std::string& filename) {
    file.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);
}

void TextFileHandler::writeFile(const std::string& content) {
    if (file.is_open()) {
        file << content;
    }
}

std::string TextFileHandler::readFile() {
    std::string content;
    if (file.is_open()) {
        file.seekg(0, std::ios::beg);  // Додано цей рядок
        std::getline(file, content);
    }
    return content;
}
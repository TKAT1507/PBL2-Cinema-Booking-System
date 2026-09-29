#include "FileManager.h"

DynamicArray<std::string> FileManager::readLines(const std::string& filePath) {
    DynamicArray<std::string> lines;
    std::ifstream file(filePath);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    }
    return lines;
}

void FileManager::writeLines(const std::string& filePath, const DynamicArray<std::string>& lines) {
    std::ofstream file(filePath);
    if (file.is_open()) {
        for (int i = 0; i < lines.size(); ++i) {
            file << lines[i] << "\n";
        }
        file.close();
    }
}

void FileManager::appendLine(const std::string& filePath, const std::string& line) {
    std::ofstream file(filePath, std::ios::app);
    if (file.is_open()) {
        file << line << "\n";
        file.close();
    }
}

bool FileManager::fileExists(const std::string& filePath) {
    std::ifstream file(filePath);
    return file.good();
}

std::string FileManager::getDataPath(const std::string& filename) {
    return "data/" + filename;
}

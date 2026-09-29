#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <fstream>
#include "DynamicArray.h"

class FileManager {
public:
    static DynamicArray<std::string> readLines(const std::string& filePath);
    static void writeLines(const std::string& filePath, const DynamicArray<std::string>& lines);
    static void appendLine(const std::string& filePath, const std::string& line);
    static bool fileExists(const std::string& filePath);
    static std::string getDataPath(const std::string& filename);
};

#endif // FILEMANAGER_H

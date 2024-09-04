
// Downscales .cbz files

#include <iostream>
#include <fstream>
#include <cstdio>

int main() {
    std::string fileName;
    std::cout << "Enter a file name: ";
    std::cin >> fileName;
    std::ofstream cbz(fileName);
    std::string fileNameShort = fileName;
    fileNameShort.erase(fileNameShort.length() - 4, 4);
    fileNameShort = fileNameShort + ".zip";
    std::cout << "File opened\n";
    std::rename(fileName.c_str(), fileNameShort.c_str());
    cbz.close();
    std::cout << "File closed\n";
    system("pause");
    return 0;
}
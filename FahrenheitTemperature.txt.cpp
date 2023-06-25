#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file("FahrenheitTemperature.txt");
    if (file.is_open()) {
        file << "Toronto 47\n";
        file << "Lima 66\n";
        file << "Istanbul 57\n";
        file << "Lagos 81\n";
        file << "Shanghai 61\n";
        file << "Sydney 64\n";
        file.close();
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

// Function to generate a key
std::string generateKey() {
    std::string key = "KEY-" + std::to_string(rand() % 10000);
    return key;
}

// Function to reset the license
void resetLicense() {
    std::cout << "Resetting license" << std::endl;
    std::remove("activation.txt");
}

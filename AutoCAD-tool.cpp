#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

// Function to activate
void activate(const std::string& licenseKey) {
    // Placeholder code for activation
    std::cout << "Activating with key: " << licenseKey << std::endl;
    // Example: write the key to a file
    std::ofstream activationFile("activation.txt");
    activationFile << "License Key: " << licenseKey << std::endl;
    activationFile.close();
}

// Function to generate a key
std::string generateKey() {
    // Simple key generation (for demonstration)
    std::string key = "KEY-" + std::to_string(rand() % 10000);
    std::cout << "Generated key: " << key << std::endl;
    return key;
}

// Function to reset the license
void resetLicense() {
    // Placeholder code for resetting the license
    std::cout << "Resetting adobe illustrator license" << std::endl;
    // Example: remove the activation file
    std::remove("activation.txt");
}

int main() {
    std::cout << "Choose an action:" << std::endl;
    std::cout << "1. Activate" << std::endl;
    std::cout << "2. Generate Key" << std::endl;
    std::cout << "3. Reset License" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::string licenseKey;
            std::cout << "Enter activation key: ";
            std::cin >> licenseKey;
            activate(licenseKey);
            break;
        }
        case 2: {
            std::string key = generateKey();
            std::cout << "Generated key: " << key << std::endl;
            break;
        }
        case 3:
            resetLicense();
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}

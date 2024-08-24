#include "logging.h"
#include <iostream>

bool debugMode = false;

void logInformation(int level, const std::string& information) {
    if (!debugMode) return;

    switch (level) {
        case 1:
            std::cout << "[INFO] " << information << "\n";
            break;
        case 2:
            std::cout << "[WARN] " << information << "\n";
            break;
        case 3:
            std::cout << "[ERROR] " << information << "\n";
            break;
        default:
            std::cout << "[INTERNAL-ERROR] Incorrect usage of logInformation()!\n";
            break;
    }
}

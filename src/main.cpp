#include "tui.h"
#include "logging.h"
#include <cstdlib>
#include <ctime>
#include <cstring>

int main(int argc, char* argv[]) {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    // Check if debug mode is enabled via command-line arguments
    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--debug") == 0) {
            debugMode = true;
            logInformation(1, "Debug mode enabled.");
        }
    }

    playGame();

    return 0;
}

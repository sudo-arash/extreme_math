#include "equation.h"
#include "logging.h"
#include <cstdlib>

int getRandomNumber(int min, int max) {
    logInformation(1, "Generating random number with min: " + std::to_string(min) + " and max: " + std::to_string(max));
    return rand() % (max - min + 1) + min;
}

void generateLinearEquation(int& a, int& b, int& c, int& correctAnswer) {
    logInformation(1, "Generating linear equation...");
    a = getRandomNumber(1, 10);
    correctAnswer = getRandomNumber(1, 10);
    c = getRandomNumber(0, 10);
    b = a * correctAnswer + c;
}

void generateQuadraticEquation(int& a, int& b, int& c, int& d, int& correctAnswer) {
    logInformation(1, "Generating quadratic equation...");
    a = getRandomNumber(1, 10);
    correctAnswer = getRandomNumber(1, 10);
    b = getRandomNumber(1, 10);
    c = getRandomNumber(1, 10);
    d = a * correctAnswer * correctAnswer + b * correctAnswer + c;
}

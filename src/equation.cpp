#include "equation.h"
#include "logging.h"
#include <cstdlib>
#include <cmath> // For std::sqrt

// Function to generate a random number between min and max (inclusive)
int getRandomNumber(int min, int max) {
    if (min > max) {
        logInformation(1, "Invalid range: min is greater than max.");
        return 0; // Handle the case of invalid range gracefully
    }
    logInformation(1, "Generating random number with min: " + std::to_string(min) + " and max: " + std::to_string(max));
    return rand() % (max - min + 1) + min;
}

void generateLinearEquation(int& a, int& b, int& c, int& correctAnswer) {
    logInformation(1, "Generating linear equation...");
    a = getRandomNumber(1, 10); // Coefficient of x
    b = getRandomNumber(0, 10); // Constant term on the right side
    correctAnswer = getRandomNumber(-10, 10); // Solution for x

    // Calculate the result for c
    c = a * correctAnswer + b;

    // Log the generated equation
    logInformation(1, "Generated equation: " + std::to_string(a) + "x + " + std::to_string(b) + " = " + std::to_string(c) + ", Solution: " + std::to_string(correctAnswer));
}

void generateQuadraticEquation(int& a, int& b, int& c, int& d, int& correctAnswer) {
    logInformation(1, "Generating quadratic equation...");
    
    // Choose a random integer for the correctAnswer
    correctAnswer = getRandomNumber(1, 10);
    
    // Generate coefficients and constants for the quadratic equation
    a = getRandomNumber(1, 5);    // Smaller range for coefficients to simplify
    b = getRandomNumber(1, 5);
    c = getRandomNumber(1, 5);
    
    // Compute the value of d to ensure the equation is solvable
    d = a * correctAnswer * correctAnswer + b * correctAnswer + c;
    
    // Log the generated equation
    logInformation(1, "Generated equation: " + std::to_string(a) + "x^2 + " + std::to_string(b) + "x + " + std::to_string(c) + " = " + std::to_string(d));
}

void generateAdvancedLinearEquation(int& a, int& b, int& c, int& d, int& correctAnswer) {
    logInformation(1, "Generating advanced linear equation...");
    
    // Generate coefficients for the equation
    a = getRandomNumber(1, 10);    // Coefficient of x on the left side
    c = getRandomNumber(1, 10);    // Coefficient of x on the right side
    b = getRandomNumber(1, 20);    // Constant on the left side
    d = getRandomNumber(1, 20);    // Constant on the right side
    
    // Choose a random solution for x
    correctAnswer = getRandomNumber(1, 10);

    // Compute the value of the right side constant
    int leftSide = a * correctAnswer + b;
    d = leftSide - c * correctAnswer;
    
    // Log the generated equation
    logInformation(1, "Generated equation: " + std::to_string(a) + "x + " + std::to_string(b) + " = " + std::to_string(c) + "x + " + std::to_string(d) + ", Solution: " + std::to_string(correctAnswer));
}

// [!] Not tested!
// void generateComplexQuadraticEquation(int& a, int& b, int& c, int& d, int& e, int& correctAnswer) {
//     logInformation(1, "Generating complex quadratic equation...");

//     a = getRandomNumber(1, 10);
//     b = getRandomNumber(1, 10);
//     c = getRandomNumber(1, 10);
//     d = getRandomNumber(1, 10);
//     e = getRandomNumber(1, 10);

//     // Generate a random correctAnswer and compute the result
//     correctAnswer = getRandomNumber(1, 10);
//     int result = a * correctAnswer * correctAnswer * correctAnswer + b * correctAnswer * correctAnswer + c * correctAnswer + d;

//     // Adjust e to match the result
//     e = result - d;

//     // Log the generated equation
//     logInformation(1, "Generated equation: " + std::to_string(a) + "x^3 + " + std::to_string(b) + "x^2 + " + std::to_string(c) + "x + " + std::to_string(d) + " = " + std::to_string(e) + ", Solution: " + std::to_string(correctAnswer));
// }

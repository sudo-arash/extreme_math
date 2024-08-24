#include "tui.h"
#include "equation.h"
#include "logging.h"
#include <iostream>

void displayMenu() {
    std::cout << "Welcome to Extreme Math!\n";
    std::cout << "Please select an option:\n";
    std::cout << "1. Solve Linear Equations\n";
    std::cout << "2. Solve Quadratic Equations\n";
    std::cout << "3. Solve Advanced Linear Equations\n";
    std::cout << "4. Challenge Mode\n";
    std::cout << "5. Exit\n";
}

void solveLinear() {
    int a, b, c, correctAnswer, userAnswer;
    generateLinearEquation(a, b, c, correctAnswer);
    std::cout << "Solve for x: " << a << "x + " << b << " = " << c << "\n";
    std::cout << "Your answer: ";
    std::cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        std::cout << "Correct! Well done.\n";
    } else {
        std::cout << "Wrong answer. The correct answer was: " << correctAnswer << "\n";
    }
}

void solveQuadratic() {
    int a, b, c, d, correctAnswer, userAnswer;
    generateQuadraticEquation(a, b, c, d, correctAnswer);
    std::cout << "Solve for x: " << a << "x^2 + " << b << "x + " << c << " = " << d << "\n";
    std::cout << "Your answer: ";
    std::cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        std::cout << "Correct! Well done.\n";
    } else {
        std::cout << "Wrong answer. The correct answer was: " << correctAnswer << "\n";
    }
}

void solveAdvancedLinear() {
    int a, b, c, d, correctAnswer, userAnswer;
    generateAdvancedLinearEquation(a, b, c, d, correctAnswer);
    std::cout << "Solve for x: " << a << "x + " << b << " = " << c << "x + " << d << "\n";
    std::cout << "Your answer: ";
    std::cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        std::cout << "Correct! Well done.\n";
    } else {
        std::cout << "Wrong answer. The correct answer was: " << correctAnswer << "\n";
    }
}


void playGame() {
    char choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case '1':
                solveLinear();
                break;
            case '2':
                solveQuadratic();
                break;
            case '3':
                solveAdvancedLinear();
                break;
            case '4':
                solveLinear();
                solveQuadratic();
                solveAdvancedLinear();
                break;
            case '5':
                std::cout << "Thanks for playing!\n";
                break;
            default:
                std::cout << "Invalid option. Please try again.\n";
        }

    } while (choice != '5');
}

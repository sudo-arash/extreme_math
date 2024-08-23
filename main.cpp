#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

// Function to generate a random integer between min and max
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to generate and solve a random equation
void generateEquation(int& a, int& b, int& c, int& correctAnswer) {
    a = getRandomNumber(1, 10);     // Random coefficient of x (not 0)
    correctAnswer = getRandomNumber(1, 10);  // Random integer solution for x
    c = getRandomNumber(0, 10);     // Random constant

    // Calculate b so that ax + b = c has an integer solution
    b = a * correctAnswer + c;
}

int main() {
    srand(time(0)); // Seed the random number generator

    int a, b, c, userAnswer, correctAnswer;
    char choice;

    do {
        generateEquation(a, b, c, correctAnswer);

        cout << "Solve for x: " << a << "x + " << b << " = " << c << "\n";
        cout << "Your answer: ";
        cin >> userAnswer;

        if (userAnswer == correctAnswer) {
            cout << "Correct! Well done.\n";
        } else {
            cout << "Wrong answer. The correct answer was: " << correctAnswer << "\n";
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!\n";

    return 0;
}

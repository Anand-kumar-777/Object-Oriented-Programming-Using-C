/*
Documentation

Write a C++ program using nested loops to find all pairs
of numbers (1 to N) whose sum equals K.

Date   : 10/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main() {
    int number, targetSum;

    cout << "Enter Range Number: ";
    cin >> number;

    cout << "Enter Target Sum: ";
    cin >> targetSum;

    bool pairFound = false;

    for (int firstNumber = 1; firstNumber <= number; firstNumber++) {
        for (int secondNumber = firstNumber + 1;
             secondNumber <= number;
             secondNumber++) {

            if (firstNumber + secondNumber == targetSum) {
                cout << firstNumber << " " << secondNumber << endl;
                pairFound = true;
            }
        }
    }

    if (!pairFound) {
        cout << "No pair found." << endl;
    }

    return 0;
}
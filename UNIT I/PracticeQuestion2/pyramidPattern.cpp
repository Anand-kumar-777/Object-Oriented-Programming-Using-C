/*
Write a C++ program using nested loops to print a pyramid star pattern of N rows.

Date : 06-08-2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the no of rows : ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        // Inner Loop 1: Print leading spaces for alignment
        for (int j = 1; j <= number - i; j++) {
            cout << " ";
        }

        // Inner Loop 2: Print stars for the current row
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
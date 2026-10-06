/*
Documentation:
Write a C++ program to check whether a number is Armstrong
and print all Armstrong numbers up to N.

Date - 06-08-2026
Author - Anand Kumar
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int limit;

    cout << "Enter a number: ";
    cin >> limit;

    for (int currentNum = 1; currentNum <= limit; currentNum++)
    {
        // Counting the digits of the current number
        int tempNum = currentNum;
        int digitCount = 0;
        int armstrongSum = 0;

        do
        {
            digitCount++;
            tempNum /= 10;
        }
        while (tempNum != 0);

        // Calculating the sum of digits raised to digitCount
        int duplicateNum = currentNum;

        while (duplicateNum != 0)
        {
            int lastDigit = duplicateNum % 10;

            armstrongSum += static_cast<int>(
                round(pow(lastDigit, digitCount))
            );

            duplicateNum /= 10;
        }

        // Check whether current number is an Armstrong number
        if (armstrongSum == currentNum)
        {
            cout << currentNum << " ";
        }
    }

    return 0;
}
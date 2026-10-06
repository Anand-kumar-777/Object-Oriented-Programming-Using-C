/*
Write a C++ program using nested loops to print the Butterfly star pattern.

Date : 09/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a Number : ";
    cin >> number;

    // printing the Upper Half
    for (int i = 1; i <= number; i++)
    {
        // Inner loop to print the left side star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Second inner loop to print the space
        for (int k = 1; k <= 2 * (number - i); k++)
        {
            cout << " ";
        }
        // Third inner loop to print the Rigt side star
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Printing the Lower Half
    for (int i = number; i >= 1; i--)
    {
        // First Inner loop to print Left Side Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Second inner loop to print the space
        for (int k = 1; k <= 2 * (number - i); k++)
        {
            cout << " ";
        }

        // Third Inner loop to print Right Side Star
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
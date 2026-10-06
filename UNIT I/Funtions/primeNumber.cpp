/*Write a C++ program to check the prime number into range
Date : 26/08/2026
Author : Anand Kumar
*/
#include <iostream>
using namespace std;

void displayPrime(int number1, int number2)
{
    for (int i = number1; i <= number2; i++)
    {
        if (i < 2)
        {
            continue;
        }

        bool isPrime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int number1, number2;
    cout << "Enter the first Number : ";
    cin >> number1;
    cout << "Enter the second Number : ";
    cin >> number2;

    displayPrime(number1, number2);
    return 0;
}
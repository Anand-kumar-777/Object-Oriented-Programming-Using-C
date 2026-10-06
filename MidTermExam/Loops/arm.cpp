// Write a C++ program to input a number and check whether it is an Armstrong number using a loop.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 153, originalNum, remainder, result = 0, count = 0;

    originalNum = num;

    while (num > 0)
    {
        remainder = num % 10;
        result = result + remainder * remainder * remainder;
        num = num / 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
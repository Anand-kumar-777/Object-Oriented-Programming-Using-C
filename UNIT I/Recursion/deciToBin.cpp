/*Write a C++ program to convert the Decimal NUmber into binary*/

#include <iostream>
using namespace std;

void deciToBin(int number)
{
    if (number == 0)
    {
        return;
    }
    deciToBin(number / 2);
    cout << number % 2;
}

int main()
{
    int number;
    cout << "Enter the Number : ";
    cin >> number;

    if (number == 0)
    {
        cout << 0;
    }
    else
    {
        deciToBin(number);
    }

    return 0;
}
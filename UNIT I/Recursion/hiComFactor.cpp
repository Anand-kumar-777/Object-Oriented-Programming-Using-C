/*write a C++ program to find the highest common factor using the recursion*/

#include <iostream>
using namespace std;

int hiComFactor(int number1, int number2)
{
    if (number2 == 0)
    {
        return number1;  //It's return the last number of Recursive call
    }

    return hiComFactor(number2, number1 % number2);
}

int main()
{
    int number1, number2;
    cout << "Enter the first number : ";
    cin >> number1;
    cout << "Enter the second Number : ";
    cin >> number2;

    cout << "Highest Common Factor : " << hiComFactor(number1, number2);

    return 0;
}